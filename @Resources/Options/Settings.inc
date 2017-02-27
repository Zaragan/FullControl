{For comments use brackets} 
[Variables]
{Variables declared here can be used later on between two # characters (e.g. #MyVariable#).}
{ #CRLF# is a pre-defined varaible for newline.}
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
WhatPlayerUse=AIMP

{Updater - Do not change anything here!!}
version=2.1.5
githubCurrentReleaseVerFilePath=https://github.com/Zaragan/FullControl/blob/master/README.md
