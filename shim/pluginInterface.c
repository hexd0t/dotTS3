#include "../host/shimInterface.h"
#include "pluginInterface.h"
#include "platform.h"
#include <stdint.h>

struct ShimInterface* pluginHost;
size_t hostPluginID;

const char* dotplugin_name_cache;
const char* dotplugin_name() {
	if( dotplugin_name_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		dotplugin_name_cache = pluginHost->name( hostPluginID );
	}
	return dotplugin_name_cache;
}

const char* dotplugin_version_cache;
const char* dotplugin_version() {
	if( dotplugin_version_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		dotplugin_version_cache = pluginHost->version( hostPluginID );
	}
	return dotplugin_version_cache;
}

const char* dotplugin_author_cache;
const char* dotplugin_author() {
	if( dotplugin_author_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		dotplugin_author_cache = pluginHost->author( hostPluginID );
	}
	return dotplugin_author_cache;
}

const char* dotplugin_description_cache;
const char* dotplugin_description() {
	if( dotplugin_description_cache == 0 ) {
		init_host( &pluginHost, &hostPluginID );
		dotplugin_description_cache = pluginHost->desc( hostPluginID );
	}
	return dotplugin_description_cache;
}