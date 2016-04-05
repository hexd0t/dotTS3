using System;

namespace dotTS3
{
	public class Plugin : IDisposable
	{
	    public static readonly string DisplayName = "·TS3 example plugin";
        public static readonly string Version = "winking panda";
        public static readonly string Author = "Nobody";
        public static readonly string Description = "This is an empty plugin, used only to demonstrate the dotTS3 API";
        public Plugin()
		{
			Console.WriteLine ("Hello world!");
		}

	    public void Dispose()
	    {
	        Console.WriteLine("Goodbye");
	    }
	}
}

