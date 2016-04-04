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
