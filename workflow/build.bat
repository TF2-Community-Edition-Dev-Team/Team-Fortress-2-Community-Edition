
call "C:\Program Files (x86)\Microsoft Visual Studio\2019\Enterprise\MSBuild\MsBuild.exe" games.sln /p:Configuration=Release /p:Platform=Win32 /verbosity:minimal /logger:"C:\Program Files\AppVeyor\BuildAgent\Appveyor.MSBuildLogger.dll"
