# Linux makefile - if on Windows, use msbuild

all: host shim

bindir:
	mkdir -p bin
	mkdir -p bin/plugins
	mkdir -p bin/dotTS3

host: hmonoHost hshimInterface bindir
	c++ -shared -std=c++11 host/obj/monoHost.o host/obj/shimInterface.o -o bin/dotTS3/dotts3host.so `pkg-config --libs mono-2`

hdir:
	mkdir -p host/obj

hmonoHost: hdir
	c++ -std=c++11 -c host/monoHost.cpp -o host/obj/monoHost.o `pkg-config --cflags mono-2`

hshimInterface: hdir
	c++ -std=c++11 -c host/shimInterface.cpp -o host/obj/shimInterface.o

shim: sts3plugin bindir
	cc -shared shim/obj/ts3plugin.o -o bin/plugins/shim.so

sts3plugin: sdir
	cc -Ipluginsdk/include -fPIC -c shim/ts3plugin.c -Wall -o shim/obj/ts3plugin.o
sdir:
	mkdir -p shim/obj

