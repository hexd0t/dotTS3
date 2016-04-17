#pragma once
//Extract binary name, author, description and version from PE header
//this removes the requirement to load the actual .Net binary before ts3plugin_init()
//(which would be needed if the data were provided by .Net Fields/Properties/Get-Functions
//but is to be avoided, since the TS3 client may unload the shim after only querying the
//metadata, leading to initializing the whole Mono stack only to unload it again)
//since it does not reduce the ease of use for plugin devs - they just have to fill the
//assembly: Tags accordingly (which are even included in AssemblyInfo.cs in a default C# project)
//and the compiler will generate the correct metadata
//Side benefit: plugin metadata will be available even if the dotTS3 wrapper has not been set up yet

//https://msdn.microsoft.com/en-us/windows/hardware/gg463119.aspx
//https://msdn.microsoft.com/en-us/library/aa381058.aspx
//https://msdn.microsoft.com/en-us/magazine/bb985992.aspx


const char* get_plugin_version();
const char* get_plugin_title();
const char* get_plugin_author();
const char* get_plugin_desc();

void peinfo_cleanup();