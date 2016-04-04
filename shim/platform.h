#pragma once

#include "../host/shimInterface.h"

void init_host( struct ShimInterface** interf, size_t* pluginID );
const char* shim_name();