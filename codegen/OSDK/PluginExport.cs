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
        private List<Tuple<string, string>> _parameters;
        public IReadOnlyList<Tuple<string, string>> Parameters { get { return _parameters; } }

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
            _parameters = new List<Tuple<string, string>>();
            for (int i = 3; i < match.Groups.Count; i++)
            {
                string param = match.Groups[i].Value;
                if(string.IsNullOrWhiteSpace(param))
                    continue;
                int namepos = param.LastIndexOf(' ');
                if (namepos < 0)
                    namepos = param.Length;
                _parameters.Add(new Tuple<string, string>(
                    param.Substring(0, namepos)
                        .Replace("uint64", "uint64_t")
                        .Replace("anyID", "uint16_t"),
                    namepos < param.Length ? param.Substring(namepos + 1) : ""));
            }
        }
    }
}
