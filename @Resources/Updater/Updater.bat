cscript "Updater.vbs"
pause
rd /q /s "Ilustro-Full-master"
pause
powershell.exe -File Updater.ps1
pause