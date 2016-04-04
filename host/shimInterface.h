#pragma once
#include <stdint.h>

#ifdef _WIN32
#ifdef dotTS3HOST
#define EXPORTDLL __declspec(dllexport)
#else
#define EXPORTDLL __declspec(dllimport)
#endif
#else
#define EXPORTDLL __attribute__ ((visibility("default")))
#endif

struct ShimInterface {
	const char* (*name)(size_t pluginID);
};

#ifdef __cplusplus
extern "C" {
#endif
	EXPORTDLL void __fastcall host_load_plugin( const char* ts3dir, const char* pluginName, struct ShimInterface** interf, size_t* pluginID );
#ifdef __cplusplus
}
#endif
