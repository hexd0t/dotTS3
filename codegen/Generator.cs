using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace codegen
{
    static class Generator
    {
        public static void Shim(OfficialSDK osdk)
        {
            using (var sourcef = File.Open("shim/ts3plugin.gen.c", FileMode.Create))
            using (var headerf = File.Open("shim/ts3plugin.gen.h", FileMode.Create))
            using (var source = new StreamWriter(sourcef, Encoding.UTF8))
            using (var header = new StreamWriter(headerf, Encoding.UTF8))
            {
                var pluginIDparam = new[] {"hostPluginID"};
                header.Write("// Do not edit this directly; if there are changes needed, edit the codegen and regenerate\n");
                source.Write("// Do not edit this directly; if there are changes needed, edit the codegen and regenerate\n");
                source.Write("// Do not compile this directly, it's only meant to be included in ts3plugin.c\n");
                foreach (var export in
                    osdk.PluginExports.Where(export => !Program.SpecialExports.Contains(export.Name)))
                {
                    header.Write("PLUGINS_EXPORTDLL ");
                    header.Write(export.RetType);
                    header.Write(" ");
                    header.Write(export.Name);
                    header.Write("(");
                    header.Write(string.Join(", ", export.Parameters.Select(tuple => tuple.Item1 + " " + tuple.Item2)));
                    header.Write(");\n");

                    source.Write(export.RetType);
                    source.Write(" ");
                    source.Write(export.Name);
                    source.Write("(");
                    source.Write(string.Join(", ", export.Parameters.Select(tuple => tuple.Item1 + " " + tuple.Item2)));
                    source.Write(")\n{\n\t");
                    if(export.RetType != "void")
                        source.Write("return ");
                    source.Write("pluginHost->");
                    source.Write(export.Name.Replace("ts3plugin_", ""));
                    source.Write("( ");
                    source.Write(string.Join(", ", pluginIDparam.Concat(export.Parameters.Select(tuple => tuple.Item2))));
                    source.Write(" );\n}\n");
                }
            }
        }
        public static void HostShimIF(OfficialSDK osdk)
        {
            using (var sourcef = File.Open("host/shimInterface.gen.cpp", FileMode.Create))
            using (var headerf = File.Open("host/shimInterface.gen.h", FileMode.Create))
            using (var structf = File.Open("host/shimInterface.genstruct.txt", FileMode.Create))
            using (var source = new StreamWriter(sourcef, Encoding.UTF8))
            using (var header = new StreamWriter(headerf, Encoding.UTF8))
            using (var structinit = new StreamWriter(structf, Encoding.UTF8))
            {
                var pluginIDparamFull = new[] { "size_t hostPluginID" };
                var pluginIDparam = new[] { "hostPluginID" };
                header.Write("// Do not edit this directly; if there are changes needed, edit the codegen and regenerate\n");
                source.Write("// Do not edit this directly; if there are changes needed, edit the codegen and regenerate\n");
                structinit.Write("/* Do not edit this directly; if there are changes needed, edit the codegen and regenerate */\n");
                source.Write("// Do not compile this directly, it's only meant to be included in shimInterface.cpp\n");
                foreach (var export in
                    osdk.PluginExports.Where(export => !Program.SpecialExports.Contains(export.Name)))
                {
                    var reducedName = export.Name.Replace("ts3plugin_", "");
                    header.Write(export.RetType);
                    header.Write(" (*");
                    header.Write(reducedName);
                    header.Write(")(");
                    header.Write(string.Join(", ", pluginIDparamFull.Concat( export.Parameters.Select(tuple => tuple.Item1 + " " + tuple.Item2) )));
                    header.Write(");\n");

                    source.Write(export.RetType);
                    source.Write(" plugin_");
                    source.Write(reducedName);
                    source.Write("(");
                    source.Write(string.Join(", ", pluginIDparamFull.Concat(export.Parameters.Select(tuple => tuple.Item1 + " " + tuple.Item2))));
                    source.Write(")\n{\n\t");
                    if (export.RetType != "void")
                        source.Write("return ");
                    source.Write("MONOHOST->plugin_");
                    source.Write(reducedName);
                    source.Write("( ");
                    source.Write(string.Join(", ", pluginIDparam.Concat(export.Parameters.Select(tuple => tuple.Item2))));
                    source.Write(" );\n}\n");

                    structinit.Write(", &plugin_");
                    structinit.Write(reducedName);
                }
            }
        }
        public static void HostMono(OfficialSDK osdk)
        {
            using (var sourcef = File.Open("host/monoHost.gen.cpp", FileMode.Create))
            using (var headerf = File.Open("host/monoHost.gen.h", FileMode.Create))
            using (var source = new StreamWriter(sourcef, Encoding.UTF8))
            using (var header = new StreamWriter(headerf, Encoding.UTF8))
            {
                var pluginIDparamFull = new[] { "size_t hostPluginID" };
                header.Write("// Do not edit this directly; if there are changes needed, edit the codegen and regenerate\n");
                source.Write("// Do not edit this directly; if there are changes needed, edit the codegen and regenerate\n");
                source.Write("// Do not compile this directly, it's only meant to be included in monoHost.cpp\n");
                foreach (var export in
                    osdk.PluginExports.Where(export => !Program.SpecialExports.Contains(export.Name)))
                {
                    var funcName = export.Name.Replace("ts3plugin_", "plugin_");
                    header.Write(export.RetType);
                    header.Write(" ");
                    header.Write(funcName);
                    header.Write("(");
                    header.Write(string.Join(", ", pluginIDparamFull.Concat(export.Parameters.Select(tuple => tuple.Item1 + " " + tuple.Item2))));
                    header.Write(");\n");

                    source.Write(export.RetType);
                    source.Write(" dotts3::host::mono_host::");
                    source.Write(funcName);
                    source.Write("(");
                    source.Write(string.Join(", ", pluginIDparamFull.Concat(export.Parameters.Select(tuple => tuple.Item1 + " " + tuple.Item2))));
                    source.Write(")\n{\n\t");
                    if (export.RetType != "void")
                        source.Write("return 0;");
                    source.Write("\n}\n");
                }
            }
        }
    }
}
