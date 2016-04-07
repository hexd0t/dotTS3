#include "ts3plugin.h"
#include "../host/shimInterface.h"
#include "platform.h"
#include <stdint.h>

struct ShimInterface* pluginHost;
size_t hostPluginID;

const char* name_cache;
const char* ts3plugin_name()
{
	if( name_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		name_cache = pluginHost->name( hostPluginID );
	}
	return name_cache;
}

const char* version_cache;
const char* ts3plugin_version()
{
	if( version_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		version_cache = pluginHost->version( hostPluginID );
	}
	return version_cache;
}

int ts3plugin_apiVersion()
{
	return 20;
}

const char* author_cache;
const char* ts3plugin_author()
{
	if( author_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		author_cache = pluginHost->author( hostPluginID );
	}
	return author_cache;
}

const char* description_cache;
const char* ts3plugin_description()
{
	if( description_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		description_cache = pluginHost->desc( hostPluginID );
	}
	return description_cache;
}

void ts3plugin_setFunctionPointers(const struct TS3Functions funcs)
{
}

int ts3plugin_init()
{
	return 0;
}

void ts3plugin_shutdown()
{
}

//Include codegen file
#include "ts3plugin.gen.c"
