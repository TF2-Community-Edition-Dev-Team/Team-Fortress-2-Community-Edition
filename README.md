Team Fortress 2 Community-Edition
=====

This is the old Team Fortress 2 source code from February 2008 ported to Source Engine 2013. We will work on getting it up to date with the latest vesrion of TF2 along with other updates and fixes.

### Discord
Join the discord to follow development and ideas we have along with events that may happen. 
https://discord.gg/pbpPg6gJPq

### Pull Requests
If people want to submit pull requests to help build this out that would be greatly appreciated. 
The formatting must remain the same as it is in the code now. If it is not it will be declined.

## Dependencies

### Windows
* [Visual Studio 2022](https://visualstudio.microsoft.com/downloads/) with [Visual Studio 2013 with Update 5](https://visualstudio.microsoft.com/vs/older-downloads/)

### macOS
* [Xcode 5.0.2](https://developer.apple.com/downloads/more)

### Linux
* GCC 4.8
* [Steam Client Runtime](http://media.steampowered.com/client/runtime/steam-runtime-sdk_latest.tar.xz)

## Building

Compiling process is the same as for Source SDK 2013. Instructions for building Source SDK 2013 can be found here: https://developer.valvesoftware.com/wiki/Source_SDK_2013

Assets that need to be used with compiled binaries: https://mega.nz/#!PFZiwCyY!BKDYXH4UOhTgCCvGCAaI2JULNc8B94HdmLo308BNeI4

Note that the above archive is not a playable build. It does not contain binaries, you need to build them yourself from this repository.

## Installing:

### Client:

1. Go to the Tools section in your Steam Library and install Source SDK Base 2013 Multiplayer. 

2. Download the assets package and extract its contents to <Steam>\steamapps\sourcemods.

3. Restart Steam. "Team Fortress 2 Commnunity Edition" should appear in your Steam Library.

4. Put your compiled binaries into "bin" directory.

NOTE: If you're on Linux or Mac, Steam client currently has a bug where it doesn't attach -steam parameter when running Source mods like it's supposed to. You'll need to manually add -steam parameter to the mod in your Steam Library.

### Server:

1. These instructions assume you know how to host a dedicated server for TF2 and/or other Source games. If you don't, refer to these articles:

   * https://developer.valvesoftware.com/wiki/SteamCMD
   
   * https://wiki.teamfortress.com/wiki/Windows_dedicated_server 
   
   * https://wiki.teamfortress.com/wiki/Linux_dedicated_server 

2. Use SteamCMD to download app 244310 (Source SDK Base 2013 Dedicated Server).

3. Download the assets package and extract its contents to where you installed Source SDK Base 2013 Dedicated Server.

4. If you're on Linux, go to <server_install_folder>/bin and make copies of the files as follows:

   * soundemittersystem_srv.so -> soundemittersystem.so

   * scenefilecache_srv.so -> scenefilecache.so

5. Put your compiled binaries into "bin" directory.
