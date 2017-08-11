@echo off
cls
echo Are you sure you want to uninstall Horror Game 1? [y][n]
set /p confirm=
if "%confirm%" == "y" (
cd %USERPROFILE%/Desktop
echo Deleting desktop icon...
del HorrorGame1Desktop.bat
cd %USERPROFILE%/HorrorGame1
echo Deleting game files...
del HorrorGame1.cpp
del a.exe
echo Deleting launcher...
del HorrorGame1Launcher.bat
cd %USERPROFILE%/Downloads/HorrorGame1-master/HorrorGame1-master
echo Deleting desktop icon...
del HorrorGame1Desktop.bat
echo Deleting wizard...
del HorrorGame1Wizard.bat
echo Deleting README...
del README.md
cd ..
echo Deleting download folder...
rmdir HorrorGame1-master
cd ..
echo Deleting download folder...
rmdir HorrorGame1-master
cd %USERPROFILE%/HorrorGame1
move HorrorGame1Uninstaller.bat %USERPROFILE%
cd ..
echo Deleting file folder...
rmdir HorrorGame1
pause
echo Deleting uninstaller...
del HorrorGame1Uninstaller.bat
)