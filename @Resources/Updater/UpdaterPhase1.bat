cscript "Updater.vbs"
echo Update downloaded!
pause
powershell.exe -Command "Set-ExecutionPolicy RemoteSigned -Scope CurrentUser"
echo Policy Signed!
pause
powershell.exe -File "Updater.ps1"
echo Files Extracted!
pause
call ..\..\..\Ilustro-Full-master\@Resources\Updater\UpdaterPhase2.bat