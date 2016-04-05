#include "ts3plugin.h"
#include "pluginInterface.h"

const char* ts3plugin_name()
{
	return dotplugin_name();
}

const char* ts3plugin_version()
{
	return dotplugin_version();
}

int ts3plugin_apiVersion()
{
	return 20;
}

const char* ts3plugin_author()
{
	return dotplugin_author();
}

const char* ts3plugin_description()
{
	return dotplugin_description();
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
