#pragma once
#include <stdint.h>
#include <stddef.h>
#include <ts3_functions.h>

#ifdef _WIN32
#define PLUGINS_EXPORTDLL __declspec(dllexport)
#else
#define PLUGINS_EXPORTDLL __attribute__ ((visibility("default")))
#endif

/* Required functions */
PLUGINS_EXPORTDLL const char* ts3plugin_name();
PLUGINS_EXPORTDLL const char* ts3plugin_version();
PLUGINS_EXPORTDLL int ts3plugin_apiVersion();
PLUGINS_EXPORTDLL const char* ts3plugin_author();
PLUGINS_EXPORTDLL const char* ts3plugin_description();
PLUGINS_EXPORTDLL void ts3plugin_setFunctionPointers( const struct TS3Functions funcs );
PLUGINS_EXPORTDLL int ts3plugin_init();
PLUGINS_EXPORTDLL void ts3plugin_shutdown();

//Include codegen file
#include "ts3plugin.gen.h"
