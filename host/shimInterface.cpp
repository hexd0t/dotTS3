#define dotTS3HOST
#include "shimInterface.h"
#include "monoHost.h"
#include <stdio.h>

#ifdef _WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif

dotts3::host::mono_host* MONOHOST;

const char* plugin_name( size_t pluginID )
{
	return MONOHOST->plugin_name( pluginID );
}

const char* plugin_version( size_t pluginID ) {
	return MONOHOST->plugin_version( pluginID );
}

const char* plugin_author( size_t pluginID ) {
	return MONOHOST->plugin_author( pluginID );
}

const char* plugin_desc( size_t pluginID ) {
	return MONOHOST->plugin_desc( pluginID );
}

int plugin_init( size_t pluginID) {
	return MONOHOST->plugin_init( pluginID );
}

#include "shimInterface.gen.cpp"

ShimInterface SHIMINTER = { &plugin_name, &plugin_version, &plugin_author, &plugin_desc, &plugin_init
#include "shimInterface.genstruct.txt"
};

void host_load_plugin( const char* ts3dir, const char* dllName, ShimInterface** interf, size_t* pluginID)
{
#if defined(_WIN32) && defined(_DEBUG)
	MessageBoxA( 0,dllName,"Attach debugger",0 );
#endif
	try {
		if( MONOHOST == nullptr ) {
			MONOHOST = new dotts3::host::mono_host( ts3dir );
		}
		*pluginID = MONOHOST->load_plugin( dllName );
		printf( "[.TS3 Host] Plugin loaded as id %llu '%s'\n", static_cast<unsigned long long>(*pluginID), dllName );
		*interf = &SHIMINTER;
	}
	catch(std::exception& ex )
	{
		printf( "[.TS3 Host] Load plugin exception:\n%s\n", ex.what() );
#ifdef _WIN32
		MessageBoxA( 0, ex.what(), ".TS3 Host load plugin exception", 0 );
#endif
	}
}
