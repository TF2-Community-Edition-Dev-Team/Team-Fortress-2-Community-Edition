cd src
reg add HKLM\SOFTWARE\WOW6432Node\Microsoft\VisualStudio\10.0\Projects\{8BC9CEB8-8B4A-11D0-8D11-00A0C91BC942} /v DefaultProjectExtension /t REG_SZ /d vcproj
devtools\bin\vpc.exe /tf_mod +game /mksln games.sln
