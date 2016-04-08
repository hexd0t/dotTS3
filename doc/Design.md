.TS3 design document
====================

Goals:
 1. provide a wrapper loading ECMA-335-based (".NET Framework") binaries through the TS3 plugin API
 2. make available as much of the C plugin API as possible
 3. translate the API style to "the C#-way" - using the same style as the framework libraries (eg. rename lowercase_underscore to UpperCamelCase)
 4. support as many TS3-enabled platforms as possible
 5. make the wrapper as resource-efficient as plossible

Derived decisions:
 - To satisfy goal 1, a CLI environment is needed. Currently, there are 2 prevalent CLI host libraries: The Microsoft .NET Framework, and the Mono Project.
   Since the .NET Framework is (so far) only available on Windows - which conflicts with goal 4 - mono will be used.
 - To provide each loaded plugin with their own TS3 plugin-ID, command keyword, etc., each installed plugin will need it's own wrapper plugin binary
   (because a single TS3 plugin is only allocated one)
 - Since loading a seperate mono runtime for each of multiple wrapped plugins is unneccessary (conflicts with goal 5),
   hosting the CLI environment will only be done once per TS3client instance,
   and the binary implementing the c plugin api (the "Shim") will only hand over calls between TS3 and the Mono hosting library