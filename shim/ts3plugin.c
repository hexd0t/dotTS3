#include "ts3plugin.h"
#include "pluginInterface.h"

const char* ts3plugin_name()
{
	return dotplugin_name();
}

const char* ts3plugin_version()
{
	return "-";
}

int ts3plugin_apiVersion()
{
	return 20;
}

const char* ts3plugin_author()
{
	return "-";
}

const char* ts3plugin_description()
{
	return "dotTS3";
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
