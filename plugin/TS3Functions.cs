using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace DotTS3
{
    public static class TS3Functions
    {
        [MethodImpl(MethodImplOptions.InternalCall)]
        public static extern string GetClientLibVersion();
    }
}
