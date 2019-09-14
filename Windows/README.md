#Windows编程

#Windows使用问题处理
1.输入gpedit.msc后提示找不到gpedit.msc的解决方法
	1)批处理开启组策略功能,保存gpedit.bat的文件,保存类型选择所有文件
		@echo off
		pushd "%~dp0"
		dir /b %systemroot%\Windows\servicing\Packages\Microsoft-Windows-GroupPolicy-ClientExtensions-Package~3*.mum >gp.txt
		dir /b %systemroot%\servicing\Packages\Microsoft-Windows-GroupPolicy-ClientTools-Package~3*.mum >>gp.txt
		for /f %%i in ('findstr /i . gp.txt 2^>nul') do dism /online /norestart /add-package:"%systemroot%\servicing\Packages\%%i"
		pause
	2)以管理员身份运行，等待批处理执行完成即可
	3)运行gpedit.msc
