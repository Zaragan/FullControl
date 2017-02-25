sleep 10
rd /q /s "..\..\..\Ilustro-Full"
move ..\..\..\Ilustro-Full-master ..\..\..\Ilustro-Full
echo Folder renamed!
pause
del "..\..\..\Ilustro-Full-master.zip"
echo Zip deleted!
pause