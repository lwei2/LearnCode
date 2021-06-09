#BurnInTest
	


#Command line arguments (other BurnInTest options)
	选择此选项后，可以通过在磁盘选择列表中选择“# Auto settings”行来修改所有磁盘的测试设置。选择此选项时，无法配置单个磁盘设置。此选项不会改变软盘驱动器或光盘驱动器的首选项。
为了也包括可移动驱动器卷，指定命令行参数“-ADR”。

-ADR 
	包括指定时可移动的自动磁盘。当自动选择磁盘驱动器时，不仅将包括固定磁盘卷，还将包括可移动驱动器卷。

-B
	当设置活动跟踪级别2日志记录时，BurnInTest将生成额外的串口测试信息。这有助于调试特定的串口错误。

-C [configfilename]
	加载[configfilename]指定的配置文件

-D [minutes]
	将测试持续时间设置为以分钟为单位指定的值。可以使用十进制值。

-E [data]
	[data]是0..255范围内的单个字节。如果没有指定，串口测试将使用随机数据的默认设置。这有助于调试特定的串口错误。

-F
	如果选择了磁盘自检，那么也要运行扩展磁盘自检(即短盘自检之后)。

-H
	这是为在微软WinPE上运行时使用burntest而设计的。

-HX
	启动时将屏幕分辨率设置为1024 x 768, 32位颜色，并立即退出burntest。

-J
	在测试文件之间循环磁盘测试模式(当循环集时)。注意:在这种情况下，随机搜索将被跳过。添加这个选项是为了允许在非常大的磁盘上使用多个测试模式，而不必等到使用一个模式对磁盘进行完全测试后再转到下一个磁盘测试模式。

-K
	指定当出现错误(例如验证错误)时不删除磁盘驱动器测试文件。这是为了帮助调查磁盘错误。建议将此选项与首选项中的“错误自动停止测试”特性一起使用。一旦测试文件被调查，它们应该被手动删除。

-KA
	指定在任何情况下都不删除磁盘驱动器测试文件。一旦测试文件被调查，它们应该被手动删除。

-L [x,y,wt,ht]
	启动burntest，主窗口位于左上角坐标x, y，宽度wt，高度ht。在[x,y,wt,ht]规范中没有空白字符是很重要的。

-M
	当BurnInTest启动时自动显示机器ID窗口。这在生产线场景中非常有用，它允许测试人员以更自动化的方式输入特定于测试的信息。

-MGT [MachineID]
	即使另一个MachineID已保存为默认MachineID，也将使用此值。[机器ID]可以是固定文本或将被扩展的环境变量。例如:
		bit.exe -MGT MYMACHINEID
		bit.exe -MGT %MAC_ADDRESS%

-N [size in MB]
	如果磁盘卷的大小小于指定的大小(单位为MB)，则从自动磁盘测试选择中排除磁盘卷。添加这个选项是为了允许小卷(例如WinPE下SSD上的系统预留卷)被排除在自动磁盘卷选择之外。使用实例"-n 2000"，当指定的磁盘卷大小小于2GB时，将排除所有磁盘卷。

-P
	强制所有的文件(例如配置文件和日志文件)，通常会保存或从用户的个人文件夹加载(如。(没有指定目录路径)保存或从BurnInTest目录加载。这在从USB驱动器、CD、DVD、火线驱动器等可移动媒体运行burntest时非常有用。	

-PHYSDISK
	如果在WinPE上运行，“自动选择所有磁盘”的卷设置将变为“自动选择所有物理磁盘”。结果磁盘测试将删除系统上所有物理磁盘上的任何数据，包括文件系统。

-R
	立即执行测试，而不需要按go按钮。它还跳过测试前警告消息。

-S [scriptfilename]
	[scriptfilename]可以是脚本文件的绝对或相对路径，但如果路径和/或文件名包含任何空格字符，你应该用双引号(" ")将整个字符串括起来。在这里了解更多关于脚本的信息。通常，-c<onfig file>与-s命令行参数一起使用。这将用一个特定的配置启动脚本，而不是PC上的当前配置(在LastUsed.bitcfg文件)。如果脚本包含REBOOT/REBOOTEND命令，指定BurnInTest的启动快捷方式(在重启后启动BurnInTest)不应该包含-c <配置文件>，在这种情况下，PC上的当前配置应该用于重启后脚本的继续。	

-T
	允许外部应用程序停止burntest测试。

-U
	强制burntest在启动时设置登录。日志记录将以活动trace 2日志记录和文件名Debug<_date/time>.trace开始。

-UA
	强制burntest在启动时设置登录，并在启动时显示额外的信息窗口，要求用户继续操作。

-US
	强制BurnInTest在启动时设置登录，但不显示文件位置窗口(-U的静默版本)。

-V
	增加标准RAM测试的错误报告细节。

-W
	最小化burntest收集和显示的系统信息的数量。这对于测试自动化是很有用的，因为它需要一些时间来收集这些信息并减慢测试启动的速度。它还可以简单地用于减少报表中的系统信息量。如果在启动时收集某些系统信息有问题，也可以使用它。
	注意:为了减少特定信息，以下文本可以添加到命令行参数“-W”、“_CPU”、“_SMBIOS”和/或“_SPD”中。例如，“-W_SMBIOS_SPD”表示不收集SMBIOS和SPD数据，而是收集所有其他系统信息。


-X
	在启动时跳过DirectX版本检查。这对于那些不想安装最新版本的DirectX并且不想使用DirectX测试的用户来说是很有用的。3 d测试)。

-Y
	在首选项编辑器模式下启动burntest。


#Scripting a series of tests
	脚本中包含的所有测试的通过/失败指示可以在脚本化的测试运行结束时显示。为了实现这一点，您应该从日志首选项中选择“累积日志直到手动清除”，并且结果应该在脚本测试运行之前或开始时被清除。
	脚本文件是ASCII文本文件，你可以创建一个文本编辑器(如记事本)。文件名必须以扩展名' .bits '结束。要启动脚本，请使用“Test / Execute script”菜单项。
	每个脚本命令都必须出现在文本文件中的单独一行中，整个命令必须出现在单个行中。(例如，一个命令不能被分割成多行)。
	命令与参数之间必须用一个或多个空格隔开。
	可以通过以' # '字符开头的行来包含注释。
	脚本的最大长度为300个字符。

	
##EXECUTE COMMAND
	概述:执行外部文件并继续处理脚本。
	Syntax:
		EXECUTE <Filename> <Parameters>
	Parameters:	
		Filename	The name of the file to execute. The file name must be enclosed in double quotes (“”). The file must be an executable.
		Parameters	Any command line parameters which you wish to pass to your executable. If any of these parameters are filenames, you should enclose them in double quotes (“”)
	Examples:
		#Start up Notepad with some results before starting tests.
		EXECUTE "c:\windows\system32\notepad.exe" "c:\MyResults\Results.txt"
		RUN CONFIG


##EXECUTEWAIT命令
	概述:运行一个可执行文件，并在继续处理脚本之前等待该进程完成





























#BurnInTest相关网址
	1.官网