@echo off
cscript "Updater.vbs"
echo Update downloaded!
powershell.exe -Command "Set-ExecutionPolicy RemoteSigned -Scope CurrentUser"
echo Policy Signed!
powershell.exe -File "Updater.ps1"
echo Files Extracted!
start ..\..\..\Ilustro-Full-master\@Resources\Updater\UpdaterPhase2.bat
