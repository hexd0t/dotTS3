#define dotTS3HOST
#include "shimInterface.h"
#include "monoHost.h"

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

dotts3::host::mono_host* MONOHOST;

const char* plugin_name( size_t pluginID )
{
	return MONOHOST->plugin_name( pluginID );
}

ShimInterface SHIMINTER = {&plugin_name};

void __fastcall host_load_plugin( const char* ts3dir, const char* dllName, ShimInterface** interf, size_t* pluginID)
{
#ifdef _WIN32 && DEBUG
	MessageBoxA( 0,dllName,"Attach debugger",0 );
#endif
	try {
		if( MONOHOST == nullptr ) {
			MONOHOST = new dotts3::host::mono_host( ts3dir );
		}
		*pluginID = MONOHOST->load_plugin( dllName );
		*interf = &SHIMINTER;
	}
	catch(std::exception& ex )
	{
		printf( ".TS3 Host load plugin exception:\n%s", ex.what() );
#ifdef _WIN32
		MessageBoxA( 0, ex.what(), ".TS3 Host load plugin exception", 0 );
#endif
	}
}
