#pragma once

#ifdef _WIN32
#pragma comment(lib, "monosgen-2.0.lib")
#endif
#include <map>

//forward declate MonoStructs, so we don't need to expose Mono Headers
struct _MonoDomain;
typedef struct _MonoDomain MonoDomain;
struct _MonoAssembly;
typedef struct _MonoAssembly MonoAssembly;
struct _MonoClass;
typedef struct _MonoClass MonoClass;
struct MonoVTable;
typedef struct MonoVTable MonoVTable;
struct _MonoImage;
typedef struct _MonoImage MonoImage;
struct _MonoObject;
typedef struct _MonoObject MonoObject;

#include <vector>
#include <stddef.h>
#include <stdint.h>

/* Manages the embedded mono engine */
/* Create only a single, global AppDomain,
 * We trust all plugins not to be malicious anyways
 */
namespace dotts3 {
	namespace host {
		class mono_host{
		private:
			struct plugininfo
			{
				MonoAssembly* assembly;
				MonoImage* image;
				MonoClass* main_class;
				MonoVTable* main_class_vtable;
				MonoObject* main_instance;
				uint32_t main_instance_gchandle; //Keeping this stops the GC from freeing the plugin
			};
			MonoDomain* m_plugin_domain;
			std::map<std::string, size_t> m_plugin_ids;
			std::vector<plugininfo> m_plugins;
			char* m_ts3dir;
			char* m_dotts3dir;

		public:
			mono_host(const char* ts3dir);
			~mono_host();

			//Loads plugin, returns internal plugin ID
			size_t load_plugin(const char* file);

			//ShimInterface Transitions
			const char* plugin_name( size_t plugin_id );
			const char* plugin_version( size_t plugin_id );
			const char* plugin_author( size_t plugin_id );
			const char* plugin_desc( size_t plugin_id );
			int plugin_init( size_t plugin_id );

#include "monoHost.gen.h"

		private:
			const char* extract_static_string( size_t plugin_id, const char* field_name );
		};
	}
}
