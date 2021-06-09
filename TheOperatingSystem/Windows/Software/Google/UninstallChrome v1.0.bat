@echo OFF

setlocal ENABLEEXTENSIONS
SETLOCAL EnableDelayedExpansion

taskkill -im chrome.exe /f
taskkill -im GoogleUpdate.exe /f
call :GetDate
if not defined v_current_datetime exit
set v_backupFolder=c:\chrom_data_backup\!v_current_datetime!

REM 备份书签
if exist "%LOCALAPPDATA%\Google\Chrome" (
	if not exist c:\chrom_data_backup mkdir c:\chrom_data_backup
	if not exist !v_backupFolder! mkdir !v_backupFolder!
	set v_backupFolder=!v_backupFolder!\chrome
	if not exist !v_backupFolder! mkdir !v_backupFolder!
	xcopy /s /x /h /k /o /y /c "%LOCALAPPDATA%\Google\Chrome" !v_backupFolder!
)

REM Chrome Setup Uninstall
set KEY_NAME="HKLM\SOFTWARE\Wow6432Node\Microsoft\Windows\CurrentVersion\Uninstall\Google Chrome"
set VALUE_NAME=UninstallString
set UninstallString=dir
FOR /F "usebackq tokens=3*" %%A IN (`REG QUERY %KEY_NAME% /v %VALUE_NAME% 2^>nul`) DO (    
    set UninstallString=%%A %%B	
	if NOT "%%C"=="%%C" set UninstallString=!UninstallString! %%C
	if NOT "%%D"=="%%D" set UninstallString=!UninstallString! %%D
)

REM MSI Setup Uninstall
if "%UninstallString%"=="dir" (
	set KEY_NAME="HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\{4FC9E77C-E167-397D-9177-17413300902A}"
	FOR /F "usebackq tokens=3*" %%A IN (`REG QUERY !KEY_NAME! /v %VALUE_NAME% 2^>nul`) DO (    
		set UninstallString=%%A %%B	
	)
)

REM 卸载Chrome浏览器
if NOT "%UninstallString%"=="dir" %UninstallString%

REM 删除服务
sc stop gupdate
sc delete gupdate
sc stop gupdatem
sc delete gupdatem

REM 删除任务计划
schtasks /delete /tn GoogleUpdateTaskMachineCore /f
schtasks /delete /tn GoogleUpdateTaskMachineUA /f

REM 删除残留文件
rmdir /s /q "C:\Program Files\Google\Chrome"
rmdir /s /q "C:\Program Files\Google\Update"
rmdir /s /q "C:\Program Files (x86)\Google\Chrome"
rmdir /s /q "C:\Program Files (x86)\Google\Update"
rmdir /s /q "%LOCALAPPDATA%\Google\Chrome"
rmdir /s /q "%AppData%\Google\Chrome"
del /q /f "%AppData%\Microsoft\Internet Explorer\Quick Launch\User Pinned\TaskBar\chrome.lnk"
del /q /f "C:\Windows\Installer\SourceHash{4FC9E77C-E167-397D-9177-17413300902A}"

REM 删除参与注册表
reg delete "HKEY_CURRENT_USER\Software\Google\Chrome" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Google\Chrome" /f
reg delete "HKEY_CLASSES_ROOT\ChromeHTML" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Clients\StartMenuInternet\chrome.exe" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\RegisteredApplications" /v "Google Chrome" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\RegisteredApplications" /v "Google Chrome.QUJ4KEOG2UTEGJUXUO5NFFRAZM" /f
reg delete "HKEY_CURRENT_USER\SOFTWARE\Classes\ChromeHTML" /f
reg delete "HKEY_CURRENT_USER\SOFTWARE\Clients\StartMenuInternet\chrome.exe" /f
reg delete "HKEY_CURRENT_USER\SOFTWARE\RegisteredApplications" /v "Google Chrome" /f
reg delete "HKEY_CURRENT_USER\SOFTWARE\RegisteredApplications" /v "Google Chrome.QUJ4KEOG2UTEGJUXUO5NFFRAZM" /f
reg delete "HKEY_CURRENT_USER\Software\Microsoft\Windows\CurrentVersion\Uninstall\Chrome" /f
reg delete "HKEY_CURRENT_USER\Software\Google\Update" /f
REM reg delete "HKEY_CURRENT_USER\Software\Google\Update\Clients\{8A69D345-D564-463c-AFF1-A69D9E530F96}" /f
REM reg delete "HKEY_CURRENT_USER\Software\Google\Update\ClientState\{8A69D345-D564-463c-AFF1-A69D9E530F96}" /f
REM reg delete "HKEY_CURRENT_USER\Software\Google\Update\Clients\{00058422-BABE-4310-9B8B-B8DEB5D0B68A}" /f
REM reg delete "HKEY_CURRENT_USER\Software\Google\Update\ClientState\{00058422-BABE-4310-9B8B-B8DEB5D0B68A}" /f
REM reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Google\Update\ClientStateMedium\{8A69D345-D564-463c-AFF1-A69D9E530F96}" /f
REM reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Google\Update\Clients\{8A69D345-D564-463c-AFF1-A69D9E530F96}" /f
REM reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Google\Update\ClientState\{8A69D345-D564-463c-AFF1-A69D9E530F96}" /f

reg delete "HKEY_CLASSES_ROOT\AppID\GoogleUpdate.exe" /f
reg delete "HKEY_CLASSES_ROOT\Google.OneClickCtrl.9" /f
reg delete "HKEY_CLASSES_ROOT\Google.OneClickProcessLauncherMachine" /f
reg delete "HKEY_CLASSES_ROOT\Google.OneClickProcessLauncherMachine.1.0" /f
reg delete "HKEY_CLASSES_ROOT\Google.Update3WebControl.3" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.CoCreateAsync" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.CoCreateAsync.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.CoreClass" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.CoreClass.1" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.CoreMachineClass" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.CoreMachineClass.1" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.CredentialDialogMachine" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.CredentialDialogMachine.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.OnDemandCOMClassMachine" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.OnDemandCOMClassMachine.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.OnDemandCOMClassMachineFallback" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.OnDemandCOMClassMachineFallback.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.OnDemandCOMClassSvc" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.OnDemandCOMClassSvc.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.ProcessLauncher" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.ProcessLauncher.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.Update3COMClassService" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.Update3COMClassService.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.Update3WebMachine" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.Update3WebMachine.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.Update3WebMachineFallback" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.Update3WebMachineFallback.1.0" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.Update3WebSvc" /f
reg delete "HKEY_CLASSES_ROOT\GoogleUpdate.Update3WebSvc.1.0" /f
reg delete "HKEY_CLASSES_ROOT\MIME\Database\Content Type\application/x-vnd.google.oneclickctrl.9" /f
reg delete "HKEY_CLASSES_ROOT\MIME\Database\Content Type\application/x-vnd.google.update3webcontrol.3" /f
reg delete "HKEY_CLASSES_ROOT\CLSID\{42042206-2D85-11D3-8CFF-005004838597}\Old Icon\ChromeHTML" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Clients\StartMenuInternet\Google Chrome" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Clients\StartMenuInternet\Google Chrome.QUJ4KEOG2UTEGJUXUO5NFFRAZM" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\Clients\StartMenuInternet\Google Chrome.QUJ4KEOG2UTEGJUXUO5NFFRAZM" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows NT\CurrentVersion\Image File Execution Options\GoogleUpdate.exe" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Policies\Google\Chrome" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\Google\Chrome" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Wow6432Node\Google\Update" /f
reg delete "HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Windows\CurrentVersion\Uninstall\{4FC9E77C-E167-397D-9177-17413300902A}" /f
reg add HKEY_CLASSES_ROOT\.html /v "" /d htmlfile /f

REM 刷新图标缓存
ie4uinit.exe -ClearIconCache
ie4uinit.exe -show
pause
exit 

:GetDate
for /f %%I in ('wmic os get localdatetime ^|find "20"') do set dt=%%I
set v_current_datetime=%dt:~0,14%
exit /b 0