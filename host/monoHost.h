#pragma once

#ifdef _WIN32
#pragma comment(lib, "monosgen-2.0.lib")
#endif
#include <mono/metadata/image.h>

//forward declate MonoStructs, so we don't need to expose Mono Headers
struct _MonoDomain;
typedef struct _MonoDomain MonoDomain;
struct _MonoAssembly;
typedef struct _MonoAssembly MonoAssembly;
struct _MonoClass;
typedef struct _MonoClass MonoClass;
struct MonoVTable;
typedef struct MonoVTable MonoVTable;
#include <vector>

/* Manages the embedded mono engine */
/* Create only a single, global AppDomain,
 * We trust all plugins not to be malicious anyways
 */
namespace dotts3 {
	namespace host {
		class mono_host{
		private:
			MonoDomain* m_plugin_domain;
			std::vector<MonoAssembly*> m_plugin_assemblies;
			std::vector<MonoImage*> m_plugin_images;
			std::vector<MonoClass*> m_plugin_mainclasses;
			std::vector<MonoVTable*> m_plugin_mainclass_vts;
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

		private:
			const char* extract_static_string( size_t plugin_id, const char* field_name );
		};
	}
}
