#define _CRT_SECURE_NO_WARNINGS
#include "peinfo.h"
#include "platform.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* plugin_version;
char* plugin_title;
char* plugin_author;
char* plugin_desc;

const char* errors[] = {
	"An error occured while reading plugin metadata:\nUnable to open .Net-plugin binary, expected at\n",
	"An error occured while reading plugin metadata:\nPE Magic numbers invalid - the plugin seems corrupted. Located at\n",
	"An error occured while reading plugin metadata:\nCannot read plugin metadata - make sure it is a .NET assembly targeting AnyCPU. Located at\n"
};

//PE file format magic numbers
const int DOSHEADER_PEHEADOFF = 0x3C;

void pe_error( const char* dllname, const char* assembly_path, int32_t eid )
{
	plugin_version = malloc( 4 );
	strcpy( plugin_version, "ERR" );

	plugin_title = malloc( strlen( dllname ) + 3 );
	strcpy( plugin_title, "! " );
	strcat( plugin_title, dllname );

	plugin_author = malloc( 4 );
	strcpy( plugin_author, "ERR" );

	size_t desclen = strlen( assembly_path ) + strlen( errors[eid >> 4] ) + 8 + 1; //\n + suberror(32bit int -> 8 hex chars max) + \0
	plugin_desc = malloc( desclen );
	strcpy( plugin_desc, errors[eid >> 4] );
	strcat( plugin_desc, assembly_path );
	sprintf( plugin_desc + desclen - 9, "\n%x", eid );
}

int pe_findheaders(FILE* assembly, uint32_t* peloc)
{
	uint16_t sig;
	uint32_t pesig;

	if( fread( &sig, sizeof( uint16_t ), 1, assembly ) != 1 )
		return 0x11;
	if( sig != 0x5A4D ) //DOS magic number MZ
		return 0x12;
	
	fseek( assembly, DOSHEADER_PEHEADOFF, SEEK_SET );
	if( fread( peloc, sizeof( uint32_t ), 1, assembly ) != 1 )
		return 0x13;

	fseek( assembly, *peloc, SEEK_SET );
	if( fread( &pesig, sizeof( uint32_t ), 1, assembly ) != 1 )
		return 0x14;
	if( sig != 0x4550 ) //PE magic number
		return 0x15;
	return 0;
}

int pe_readcoff(FILE* assembly, uint32_t peloc)
{
	uint32_t imghloc = peloc + 4; //IMAGE_NT_HEADER directly follows the 4 byte PE\0\0 Magic
	uint32_t opthloc = peloc + 4 + 20; //Optional header directly follows image header, which is 20 bytes

			/*  Image NT Header contents:
			WORD    Machine;
			WORD    NumberOfSections; //+2
			DWORD   TimeDateStamp; //+4
			DWORD   PointerToSymbolTable; //+8
			DWORD   NumberOfSymbols; //+12
			WORD    SizeOfOptionalHeader; //+16
			WORD    Characteristics; //+18 */

	fseek(assembly, nthloc  );
	return 0;
}

void read_peinfo()
{
	if(plugin_version==0 )
	{
		const char* ts3dir = ts3_dir();
		const char* dllname = shim_name();
		char* assembly_path = malloc( strlen( ts3dir ) + 7 + strlen( dllname ) + 1 );
		strcpy( assembly_path, ts3dir );
		strcat( assembly_path, "dotTS3\\" );
		strcat( assembly_path, dllname );

		FILE* plugin_assembly = fopen( assembly_path, "rb" );

		if( plugin_assembly == 0 ) {
			pe_error( dllname, assembly_path, 0 );
			return;
		}

		uint32_t peloc;
		int errorcode = 0;
		if( (errorcode = pe_findheaders( plugin_assembly, &peloc ) ) != 0) {
			fclose( plugin_assembly );
			pe_error( dllname, assembly_path, errorcode );
			return;
		}

		if( (errorcode = pe_readcoff( plugin_assembly ) ) != 0 ) {
			fclose( plugin_assembly );
			pe_error( dllname, assembly_path, errorcode );
			return;
		}
		plugin_version = "bla";
		plugin_desc = "blabla";
	}
}

const char* get_plugin_version()
{
	read_peinfo();
	return plugin_version;
}

const char* get_plugin_title()
{
	read_peinfo();
	return plugin_title;
}

const char* get_plugin_author()
{
	read_peinfo();
	return plugin_author;
}

const char* get_plugin_desc()
{
	read_peinfo();
	return plugin_desc;
}

void peinfo_cleanup()
{
	if( plugin_version != 0 )
		free( plugin_version );
	if( plugin_title != 0 )
		free( plugin_title );
	if( plugin_author != 0 )
		free( plugin_author );
	if( plugin_desc != 0 )
		free( plugin_desc );
}
