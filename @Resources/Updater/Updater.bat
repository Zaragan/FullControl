cscript "Updater.vbs"
pause
rd /q /s "..\..\..\Ilustro-Full-master"
pause
powershell.exe -Command "Set-ExecutionPolicy RemoteSigned -Scope CurrentUser"
pause
powershell.exe -File "Updater.ps1"
pause
del "..\..\..\Ilustro-Full-master.zip"
pause