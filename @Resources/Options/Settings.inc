{ #CRLF# is a pre-defined varaible for newline.}
[Variables]

{----- Language -----}
@includeLanguage=#@#\Languages\es_ES.inc

{----- Digital Clock -----}
{If you want a 24 hour format leave "H", change to "I" if you want the 12 hour format}
TimeFormat=H

{----- Network -----}
{Set maxDownload and maxUpload to your maximum download and upload speed in bits.
 To convert kilobits, megabits, kilobytes, and megabytes into bits, go to www.google.com
 and search for something like "10 megabytes in bits".}
maxDownload=10485760
MaxUpload=10485760

{----- Weather -----}
{Go to https://weather.com and put your location on upper right box, then take the letters and numbers between "/" and ":" Example on Modesto(CA): https://weather.com/weather/today/l/USCA0714:1:US take "USCA0714" and replace it below.}
Loc=SPXX9987
{Use "I" for Imperial and "M" for Metric}
Unit=M
{Put your locale here to show weather in your language. en_GB for Great Britain english, en_US for United States english... Check your locale here if you dont know yours https://msdn.microsoft.com/en-us/library/cc233982.aspx Use the "Language Tag" column and dont forget to replace "-" to "_".}
Locale=es_ES

{----- Disk ------}
{HOWTO: Change disks letters
Change the letter of your drive to what you're using. Example: "D:" instead of "A:" or "B:"}
disk1=C:
disk2=A:
disk3=B:
{HOWTO: Adding more disks
Adding more disks is a pretty straightforward process. Follow the following steps to turn
this 2 disks skin into a 3 disks skin. You can then extend it even further as you wish.

 1) Create a new variable called disk4=X: directly below disk3=B: in the below section
 2) Create a copy of the [measureTotalDisk3] and [measureUsedDisk3] sections on Disk.ini
 3) Rename the copied sections to [measureTotalDisk4] and [measureUsedDisk4], respectively.
    Also change Drive=#disk3# to Drive=#disk4#
 4) Create a copy of the [meterLabelDisk3], [meterValueDisk3], and [meterBarDisk3].
    Rename all Disk3's in the copied sections to Disk4.
 5) Now we need to change the Y= values to adjust height. Change Y= under [meterLabelDisk3]
    to Y=100 (calculated by adding 20 to the Y= value of previous meterLabel).
    Then change Y= under [meterBarDisk3] to Y=92 (calculated by adding 20 to the Y= value of previous meterBar).
 6) Save the file as 'Disk.ini'. Now right-click on the Rainmeter tray icon and select
    'Refresh All'. Now go activate the 'Disk.ini' skin and enjoy! :)}

{----- Player Skin -----}
{Search for your prefered player here https://docs.rainmeter.net/manual/plugins/nowplaying/ on the section "supported players"}
WhatPlayerUse=AIMP

{Updater - Do not change anything here!!}
version=2.2.0
githubCurrentReleaseVerFilePath=https://github.com/Zaragan/FullControl/blob/master/README.md