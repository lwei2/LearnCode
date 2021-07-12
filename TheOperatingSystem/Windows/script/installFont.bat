@echo off
%1 mshta vbscript:CreateObject("Shell.Application").ShellExecute("cmd.exe","/c %~s0 ::","","runas",1)(window.close)&&exit
cd /d "%~dp0"
@echo off
title Font batch installation
cd /d %~dp0
cls
copy /y * "%windir%Fonts"
reg add "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\Fonts" /v "SourceHanSansCN Medium (TrueType)" /t REG_SZ /d "SourceHanSansCN-Medium.otf" /f
@echo Press any key to exit
pause