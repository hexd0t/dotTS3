using codegen.OSDK;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace codegen
{
    class OfficialSDK
    {
        public IReadOnlyList<PluginExport> PluginExports { get { return _pluginExports; } }
        private List<PluginExport> _pluginExports;
        public OfficialSDK()
        {
            readPluginExports();
        }

        private void readPluginExports()
        {
            _pluginExports = new List<PluginExport>();
            var pluginh = File.OpenText(@"pluginsdk\src\plugin.h");
            do
            {
                var export = new PluginExport(pluginh.ReadLine());
                if (export.Valid)
                    _pluginExports.Add(export);
            } while (!pluginh.EndOfStream);
        }
    }
}
