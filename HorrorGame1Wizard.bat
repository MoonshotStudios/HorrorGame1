@echo off
cls
echo Would you like to install Horror Game 1? [y][n]
set /p confirm=
if not "%confirm%" == "y" (
	goto end
)
cd %USERPROFILE%
echo Creating file folder...
mkdir HorrorGame1
cd %USERPROFILE%/Downloads/HorrorGame1-master/HorrorGame1-master
echo Installing launcher...
move HorrorGame1Launcher.bat %USERPROFILE%/HorrorGame1
echo Installing uninstaller...
move HorrorGame1Uninstaller.bat %USERPROFILE%/HorrorGame1
echo Installing game files...
move HorrorGame1.cpp %USERPROFILE%/HorrorGame1
pause
echo Would you like to add a desktop shortcut? [y][n]
set /p shortcut=
if "%shortcut%" == "y" (
	echo Installing desktop icon...
	cd %USERPROFILE%/Downloads/HorrorGame1-master/HorrorGame1-master
	move HorrorGame1Desktop.bat %USERPROFILE%/Desktop
)
pause
echo Installation complete. Do you have a copy of GNU G++ or MinGW installed? [y][n]
set /p havegnu=
if not "%havegnu%" == "y" (
	echo Please install GNU G++ or MinGW before running this program. Otherwise, it will not work.
)
if "%havegnu%" == "y" (
	echo You may now run the program.
)
pause
end:
exit