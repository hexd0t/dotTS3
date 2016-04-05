#ifdef _WIN32
#define _CRT_SECURE_NO_WARNINGS
#endif

#include "monoHost.h"

#include <mono/jit/jit.h>
#include <mono/metadata/assembly.h>
#include <stdexcept>

#ifdef _WIN32
void init_mono_dirs( const char* ts3dir )
{ //Windows Version bundles own Mono, so it needs to be told some paths
	char* monolibdir = new char[strlen( ts3dir ) + 15 + 1]; // ts3dir + "dotTS3\mono_lib" + '\0' - ts3dir is UTF8, but that doesn't matter, since we just copy it 1:1,
	char* monoetcdir = new char[strlen( ts3dir ) + 15 + 1]; // ts3dir + "dotTS3\mono_etc" + '\0' - so strlen gives the wanted result, even if it does not match the length
	strcpy( monolibdir, ts3dir );
	strcat( monolibdir, "dotTS3\\mono_lib" );
	strcpy( monoetcdir, ts3dir );
	strcat( monoetcdir, "dotTS3\\mono_etc" );
	mono_set_dirs( monolibdir, monoetcdir );
	delete monolibdir;
	delete monoetcdir;
}
#endif

dotts3::host::mono_host::mono_host( const char* ts3dir ) {
	printf("[.TS3 Host] Initializing Mono");

#ifdef _WIN32
	init_mono_dirs( ts3dir );
#endif

	m_plugin_domain = mono_jit_init ("dotTS3_plugin");
	printf(" done\n");

	m_ts3dir = new char[strlen( ts3dir ) + 1];
	strcpy( m_ts3dir, ts3dir );
	m_dotts3dir = new char[strlen( ts3dir ) + 7 + 1]; // ts3dir + "dotTS3/" + '\0' - regarding strlen on utf string see init_mono_dirs
	strcpy( m_dotts3dir, ts3dir );
	strcat( m_dotts3dir, "dotTS3/" );
}

dotts3::host::mono_host::~mono_host()
{
	delete m_dotts3dir;
	delete m_ts3dir;
}

size_t dotts3::host::mono_host::load_plugin(const char* filename) {
	char* fullpath = new char[strlen( m_dotts3dir ) + strlen( filename ) + 1];
	strcpy( fullpath, m_dotts3dir );
	strcat( fullpath, filename );

	MonoAssembly* assembly = mono_domain_assembly_open (m_plugin_domain, fullpath);
	if (assembly == nullptr)
		throw new std::runtime_error("Unable to load assembly");

	MonoImage* image = mono_assembly_get_image( assembly );

	MonoClass* mainclass = mono_class_from_name( image, "dotTS3", "Plugin" );
	if(mono_class_init( mainclass ) == false)
		throw new std::runtime_error( "Unable to init plugin main class" );

	MonoVTable* vtable = mono_class_vtable( m_plugin_domain, mainclass );
	mono_runtime_class_init( vtable );

	m_plugin_assemblies.push_back( assembly );
	m_plugin_images.push_back( image );
	m_plugin_mainclasses.push_back( mainclass );
	m_plugin_mainclass_vts.push_back( vtable );

	return m_plugin_assemblies.size() - 1;
}

const char* dotts3::host::mono_host::plugin_name(size_t plugin_id)
{
	return extract_static_string( plugin_id, "DisplayName" );//Deliberately not freed, but cached in the shim for the remaining runtime
}

const char* dotts3::host::mono_host::plugin_version(size_t plugin_id)
{
	return extract_static_string( plugin_id, "Version" );//Deliberately not freed, but cached in the shim for the remaining runtime
}

const char* dotts3::host::mono_host::plugin_author(size_t plugin_id)
{
	return extract_static_string( plugin_id, "Author" );//Deliberately not freed, but cached in the shim for the remaining runtime
}

const char* dotts3::host::mono_host::plugin_desc(size_t plugin_id)
{
	return extract_static_string( plugin_id, "Description" );//Deliberately not freed, but cached in the shim for the remaining runtime
}

const char* dotts3::host::mono_host::extract_static_string(size_t plugin_id, const char* field_name)
{
	MonoError err;
	MonoString* managed_string;

	MonoClassField* field = mono_class_get_field_from_name( m_plugin_mainclasses[plugin_id], field_name );
	mono_field_static_get_value( m_plugin_mainclass_vts[plugin_id], field, &managed_string );

	auto result = mono_string_to_utf8_checked( managed_string, &err );
	if( mono_error_ok( &err ) )
		return result;
	return ".TS3 error!";
}
