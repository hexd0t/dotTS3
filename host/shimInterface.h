#pragma once
#include <stdint.h>
#include <stddef.h>

#ifdef _WIN32
#ifdef dotTS3HOST
#define MONOHOST_EXPORTDLL __declspec(dllexport)
#else
#define MONOHOST_EXPORTDLL __declspec(dllimport)
#endif
#else
#define MONOHOST_EXPORTDLL __attribute__ ((visibility("default")))
#endif

struct ShimInterface {
	const char* (*name)(size_t pluginID);
	const char* (*version)(size_t pluginID);
	const char* (*author)(size_t pluginID);
	const char* (*desc)(size_t pluginID);
	int (*init)(size_t pluginID);
#include "shimInterface.gen.h"
};

#ifdef __cplusplus
extern "C" {
#endif
	MONOHOST_EXPORTDLL void host_load_plugin( const char* ts3dir, const char* pluginName, struct ShimInterface** interf, size_t* pluginID );
#ifdef __cplusplus
}
#endif

#undef MONOHOST_EXPORTDLL

