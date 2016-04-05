#ifdef _WIN32
#define _CRT_SECURE_NO_WARNINGS
#include "platform.h"
#include <stdlib.h>
typedef uint16_t wchar_t; //MSVC does not provide wchar_t when compiling C (without ++)
#include <wchar.h>
#define WIN32_LEAN_AND_MEAN
#include <windows.h>


struct {
	wchar_t TSDIR[1024]; //wide char string, Path to TS3 Install directory + trailing slash
	//Using wide chars to support non-latin chars in TS3 install directories
	char NAME[128]; //UTF8
} SHIMFILE;

HMODULE HOSTLIB;

//adds dotTS3 to the Path environment var for the current TS3 instance, so we don't need to pollute the TS3 directory itself with too many dlls
void modify_path()
{ //Alternatively one could use SetDllDirectory od AddDllDirectory
	HANDLE envmutex = CreateMutexA( 0, FALSE, "dotTS3PathMod" );
	WaitForSingleObject( envmutex, INFINITE );
	wchar_t* curPath = _wgetenv( L"Path" );
	if(curPath == 0 )
	{
		MessageBoxA(0, "Cannot get current path.\nThis will likely result in a crash soon.\n"
			"While this should normally not be needed, you can try adding the dotTS3 directory\n"
			"(in your TS3 install dir) to your users Path environment variable.", 0, 0 );
		return;
	}
	if( wcsstr(curPath, L"dotTS3") == 0 ) //Path was not adjusted yet
	{
		shim_name(); //Sets SHIMFILE.TSDIR
		wchar_t* newPath = malloc( sizeof( wchar_t ) *
			(5 + wcslen( curPath ) + 1 + wcslen( SHIMFILE.TSDIR ) + 6 + 1) ); // length of "Path=" + TS3 Path + "dotTS3" + ';' + current Path + '\0'
		wcscpy( newPath, L"Path=" );
		wcscat( newPath, SHIMFILE.TSDIR );
		wcscat( newPath, L"dotTS3" );
		wcscat( newPath, L";" );
		wcscat( newPath, curPath ); //current Path
		_wputenv( newPath );
		free( newPath );
	}
	ReleaseMutex( envmutex );
	CloseHandle( envmutex );
}

typedef void(__fastcall *host_load_plugin_func ) (const char* ts3dir, const char* pluginName, struct ShimInterface** interf, size_t* pluginID);

void init_host( struct ShimInterface** interf, size_t* pluginID )
{
	if( *interf != 0 ) //plugin already loaded
		return;
	if( HOSTLIB == 0 ) {
		modify_path();
		HOSTLIB = LoadLibraryA( "dotts3host01.dll" );
	}
	char tsdir_utf[2048];
	WideCharToMultiByte( CP_UTF8, 0, SHIMFILE.TSDIR, -1, tsdir_utf, 2048, 0, 0 );//Give Mono the TS3 dir as UTF8
	FARPROC loadproc = GetProcAddress( HOSTLIB, "host_load_plugin" );
	((host_load_plugin_func)loadproc)(tsdir_utf, shim_name(), interf, pluginID);
}

const char* shim_name()
{
	if( SHIMFILE.NAME[0] == 0 ) {
		HMODULE module = 0;
		GetModuleHandleExW( GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT,
			&shim_name, &module );
		GetModuleFileNameW( module, SHIMFILE.TSDIR, 1024 );
		wchar_t* filename = wcsrchr( SHIMFILE.TSDIR, L'\\' );
		*filename = 0; //Cut filename from path string
		++filename;
		WideCharToMultiByte( CP_UTF8, 0, filename, -1, SHIMFILE.NAME, 128, 0, 0 );
		wchar_t* plugindir = wcsrchr( SHIMFILE.TSDIR, L'\\' );
		++plugindir;
		*plugindir = 0;//Cut plugindir from path string
	}
	return SHIMFILE.NAME;
}

#endif