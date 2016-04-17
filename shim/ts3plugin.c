#include "ts3plugin.h"
#include "../host/shimInterface.h"
#include "platform.h"
#include "peinfo.h"
#include <stdint.h>

struct ShimInterface* pluginHost;
size_t hostPluginID = -1;

const char* name_cache;
const char* ts3plugin_name()
{
	if( name_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		name_cache = pluginHost->name( hostPluginID );
	}
	return name_cache;
}

const char* ts3plugin_version()
{
	return get_plugin_version();
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

const char* ts3plugin_description()
{
	return get_plugin_desc();
}

void ts3plugin_setFunctionPointers(const struct TS3Functions funcs)
{
	init_host( &pluginHost, &hostPluginID );
}

int ts3plugin_init()
{//This will only be called after setFunctionPointers, so we can stop calling init_host from here on - it must have been called before
	return pluginHost->init( hostPluginID );
}

void ts3plugin_shutdown()
{

}

//Include codegen file
#include "ts3plugin.gen.c"
