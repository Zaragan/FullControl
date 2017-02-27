@echo off
ping 1.1.1.1 -n 1 -w 6000 >null
rd /q /s "..\..\..\Ilustro-Full"
move ..\..\..\Ilustro-Full-master ..\..\..\Ilustro-Full
del "..\..\..\Ilustro-Full-master.zip"
exit
