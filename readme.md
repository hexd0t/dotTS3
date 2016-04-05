dotTS3
======

A wrapper for creating Plugins for the TS3 client using .Net languages.

By using mono for executing the managed plugins, support is not limited to Windows.
(Since I don't own a Mac, I can't support it myself,
but unless someone else steps up to maintain MacOS,
I do plan on having a look at providing cross-compiled binaries)

Some of the code is generated out of the official TS3 pluginsdk.
The generated output is committed alongside "normal" code,
so unless you changed something in the Generator (or the PluginSDK changed),
you don't have to run the codegen.

The wrapper itself consists of 3 parts - a C TS3plugin shim, a C++ mono host library, and the managed plugin (the default Plugin is C#, but there's no restriction on that)
![schematic overview](/doc/Overview.svg)

General setup
=============
Copy the official pluginsdk to the folder named accordingly (see pluginsdk/README for more info)

Platform specific instructions
==============================

Windows:
	Install Mono libraries, use the installer msi from http://download.mono-project.com/archive/ - choose at least v4.4.0.
	If you plan to distribute 32 and 64 bit binaries, you'll need both mono versions.
	To reduce headaches, choose a version built with the same MSVC runtime library as TS3 - as of writing v120 / VS2013.
	You will also need the corresponding Toolchain (e.g. install VS2013 for MSVCR120) - you can still use more recent VS versions.
	
Linux:
	TBD - get a workinging state on Windows first