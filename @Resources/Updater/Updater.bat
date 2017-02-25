cscript "Updater.vbs"
rd /q /s "..\..\..\Ilustro-Full-master"
powershell.exe -Command "Set-ExecutionPolicy RemoteSigned -Scope CurrentUser"
powershell.exe -File "Updater.ps1"
del "..\..\..\Ilustro-Full-master.zip"
pause