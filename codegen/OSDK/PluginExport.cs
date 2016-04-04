using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace codegen.OSDK
{
    class PluginExport
    {
        public string Name { get; private set; }
        public string RetType { get; private set; }
        private List<string> _parameters;
        public IReadOnlyList<string> Parameters { get { return _parameters; } }

        public bool Valid { get; private set; }
        public PluginExport(string line)
        {
            var match = Regex.Match(line,
                @"PLUGINS_EXPORTDLL ([a-zA-Z0-9\*_ ]+) (ts3plugin_[a-zA-Z0-9\*_]+)\(([a-zA-Z0-9\*_ ]+)?(?:, ?([a-zA-Z0-9\*_ ]+))*\)");
            Valid = match.Success;
            if (!Valid)
                return;
            RetType = match.Groups[1].Value;
            Name = match.Groups[2].Value;
            _parameters = new List<string>();
            for (int i = 3; i < match.Groups.Count; i++)
                _parameters.Add(match.Groups[i].Value);
        }
    }
}
