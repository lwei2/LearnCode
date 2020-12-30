Windows程序
1.windows程序以WinMain()作为入口函数,控制台程序以main()作为入口函数，动态连接库以DllMain()作为入口函数。
Windows程序编译环境
	Windows环境下


CMD命令使用

查看磁盘序列号
	1.cmd
	2.diskpart
	3.list disk
	4.select disk 0/1/2
	5.detail disk
ATA发命令Cdb

硬盘的分类
	1.硬盘接口分为IDE、SATA、SCSI、光纤通道、M2-SATA、M2-Nvme和SAS七种.

SSD固态硬盘常识
	1.	

硬盘的读写
	https://max.book118.com/html/2017/1204/142747942.shtm
	

#MFC基本数据类型
	CString

#MFC数据类型转换
	1.Unicode下 CString转换为char *
		1.1
			CString cstr = _T("test")
			USES_CONVERSION;	//声明标识
			char * pFileName = T2A(cstr);   //函数T2A和W2A均支持ATL和MFC中的字符
			//char * pFileName = W2A(cstr); //也可实现转换 注意：有时候可能还需要添加引用#include <afxpriv.h>
		1.2 
			CString str = _T("test");
			int n = str.GetLength();	//注意：以下n和len的值大小不同，n是按字符计算的，len是按字节计算的
	 		int len = WideCharToMultiByte(CP_ACP,0,str,str.GetLength(),NULL,0,NULL,NULL);	//获取宽字节字符的大小，大小是按字节计算的
			char * pFileName = new char[len+1];   //以字节为单位//为多字节字符数组申请空间，数组大小为按字节计算的宽字节字节大小
			WideCharToMultiByte(CP_ACP,0,str,str.GetLength(),pFileName,len,NULL,NULL);//宽字节编码转换成多字节编码
			pFileName[len+1] = '/0';   //多字节字符以'/0'结束

	2.Unicode下char *转换为CString
		2.1
			char * pFileName = "test";
			int charLen = strlen(pFileName);	//计算char *数组大小，以字节为单位，一个汉字占两个字节
			int len = MultiByteToWideChar(CP_ACP,0,pFileName,charLen,NULL,0); //计算多字节字符的大小，按字符计算。
			TCHAR *buf = new TCHAR[len + 1]; //为宽字节字符数组申请空间，数组大小为按字节计算的多字节字符大小
			MultiByteToWideChar(CP_ACP,0,pFileName,charLen,buf,len);	//多字节编码转换成宽字节编码
			buf[len] = '/0'; //添加字符串结尾，注意不是len+1
			CString pWideChar;//将TCHAR数组转换为CString
			pWideChar.Append(buf);		
			delete []buf;//删除缓冲区
		2.2 
			char * pFileName = "test"; 
			USES_CONVERSION;
			CString s = A2T(pFileName);
			//CString s = A2W(pFileName);		
	
# MFC API
	1.GetLength();
	2.DoModel();
		函数功能：获取莫态对话框
	3.SetTimer();
	SetTimer函数的原型
		UINT_PTR SetTimer(
		HWND hWnd, // 窗口句柄
		UINT_PTR nIDEvent, // 定时器ID，多个定时器时，可以通过该ID判断是哪个定时器
		UINT nElapse, // 时间间隔,单位为毫秒
		TIMERPROC lpTimerFunc // 回调函数
		);		
#Windows API
	C.CFile

	C.CFileFind
		1.函数原型：

	C.CreateFile
		0.函数功能：
		1.函数原型：
			HANDLE WINAPI CreateFile(
			_In_ LPCTSTR lpFileName,
			_In_ DWORD dwDesiredAccess,
			_In_ DWORD dwShareMode,
			_In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
			_In_ DWORD dwCreationDisposition,
			_In_ DWORD dwFlagsAndAttributes,
			_In_opt_ HANDLE hTemplateFile
			);
		2.函数参数			
			-lpFileName String要打开的文件的名或设备名。这个字符串的最大长度在ANSI版本中为MAX_PATH，在unicode版本中为32767。
				1)lpFileName在磁盘中的表现形式：
					对于物理驱动器x，形式为 \\.\PhysicalDriveX ，编号从0开始。
					对于逻辑分区（卷），形式为 \\.\X:。					
			-dwDesiredAccess指定类型的访问对象，即访问模式（写 / 读） 。
			如果为 GENERIC_READ 表示允许对设备进行读访问；如果为 GENERIC_WRITE 表示允许对设备进行写访问（可组合使用）；如果为零，表示只允许获取与一个设备有关的信息 。
				GENERIC_READ - 读
				GENERIC_WRITE - 写
				GENERIC_EXECUTE - 执行
				GENERIC_ALL - 所有				
			-dwShareMode  -  共享模式, 零表示不共享； FILE_SHARE_READ 和 / 或 FILE_SHARE_WRITE 表示允许对文件进行共享访问					
			-lpSecurityAttributes - 指向安全属性的指针 ，SECURITY_ATTRIBUTES ，指向一个 SECURITY_ATTRIBUTES 结构的指针，定义了文件的安全特性（如果操作系统支持的话）
			-dwCreationDisposition -  指定当文件存在或者不存在时如何动作。
				CREATE_NEW-创建文件；如文件存在则会出错
				CREATE_ALWAYS-创建文件，会改写前一个文件
				OPEN_EXISTING-文件必须已经存在。由设备提出要求
				OPEN_ALWAYS-如文件不存在则创建它
				TRUNCATE_EXISTING-讲现有文件缩短为零长度
			-hTemplateFile
		3.函数返回值：
			3.1 成功返回句柄
			3.2 失败判断标志：INVALID_HANDLE_VALUE。通过GetLastError()获取错误码，具体参考GetLastError错误码列表。
	C.CListCtrl
		列表视图控件
			typedef struct _LVCOLUMN 
			{
				UINT mask;            //说明此结构中哪些成员是有效的
				int fmt;           //列的对齐方式
				int cx;            //列的初始宽度
				LPTSTR pszText; //列的标题
				int cchTextMax;   //pszText所指向的缓冲区的大小
				int iSubItem;      //与列关联的子项的索引值，从0开始
				int iImage;           //与列关联的图像列表中指定图像的索引值
				int iOrder;           //第几列，0代表最左一列
				} LVCOLUMN, FAR *LPLVCOLUMN;
				typedef struct _LVITEM {
				UINT   mask;        //说明LVITEM结构中哪些成员有效
				int    iItem;       //项目的索引值(可以视为行号)从0开始
				int    iSubItem;    //子项的索引值(可以视为列号)从0开始
				UINT   state;       //子项的状态
				UINT   stateMask;   //状态有效的屏蔽位
				LPTSTR pszText;   //主项或子项的名称
				int    cchTextMax; //pszText所指向的缓冲区大小
				int    iImage;       //关联图像列表中指定图像的索引值
				LPARAM lParam;    //程序定义的32位参数
				int iIndent;          //表示图像位置缩进的单位
				} LVITEM, FAR *LPLVITEM;
	C.CreateProcess
		1.函数原型：BOOL CreateProcess
					(
						LPCTSTR lpApplicationName,
						LPTSTR lpCommandLine,
						LPSECURITY_ATTRIBUTES lpProcessAttributes,
						LPSECURITY_ATTRIBUTES lpThreadAttributes,
						BOOL bInheritHandles,
						DWORD dwCreationFlags,
						LPVOID lpEnvironment,
						LPCTSTR lpCurrentDirectory,
						LPSTARTUPINFO lpStartupInfo,
						LPPROCESS_INFORMATIONlpProcessInformation
					);
		2.函数参数：		
		3.函数返回值：			
			如果函数执行成功，返回非零值。
			如果函数执行失败，返回零，可以使用GetLastError函数获得错误的附加信息。
	D.DeviceIoControl		
		1.函数原型：BOOL WINAPI DeviceIoControl(
				  _In_        HANDLE       hDevice,
				  _In_        DWORD        dwIoControlCode,
				  _In_opt_    LPVOID       lpInBuffer,
				  _In_        DWORD        nInBufferSize,
				  _Out_opt_   LPVOID       lpOutBuffer,
				  _In_        DWORD        nOutBufferSize,
				  _Out_opt_   LPDWORD      lpBytesReturned,
				  _Inout_opt_ LPOVERLAPPED lpOverlapped
			);
		2.函数参数：
				hDevice [in]
					需要执行操作的设备句柄。该设备通常是卷，目录，文件或流，使用 CreateFile 函数打开获取设备句柄。具体的见备注
				dwIoControlCode [in]
					操作的控制代码，该值标识要执行的特定操作以及执行该操作的设备的类型，有关控制代码的列表，请参考备注。每个控制代码的文档都提供了lpInBuffer，nInBufferSize，lpOutB		uffer和nOutBufferSize参数的使用细节。
					1）磁盘相关的控制代码:
						IOCTL_DISK_CREATE_DISK-利用CREATE_DISK结构中的信息对指定磁盘和磁盘分区进行初始化。
						IOCTL_DISK_DELETE_DRIVE_LAYOUT-从主引导记录中删除引导信息，所以磁盘将会被从头到尾的格式化。扇区0中的分区信息也就不复存在了。
						IOCTL_DISK_FORMAT_TRACKS-格式化指定的、连续的软盘磁道。如果需要更多的功能请使用IOCTL_DISK_FORMAT_TRACKS_EX。
						IOCTL_DISK_FORMAT_TRACKS_EX-格式化指定的、连续的软盘磁道。
						IOCTL_DISK_GET_CACHE_INFORMATION-返回磁盘的高速缓存配置数据
						IOCTL_DISK_GET_DRIVE_GEOMETRY_EX-返回物理磁盘的扩展信息。包括：类型、柱面数量、每柱面磁道数、每磁道扇区数和每扇区字节数等。
						IOCTL_DISK_GET_DRIVE_LAYOUT_EX-返回各分区的扩展信息以及这些分区的特性。更多信息请参照DRIVE_LAYOUT_INFORMATION_EX结构。
						IOCTL_DISK_GET_LENGTH_INFO-返回指定磁盘/卷/分区的大小信息
						IOCTL_DISK_GET_PARTITION_INFO_EX-返回指定分区的扩展信息。包括：分区类型、大小和种类。更多信息请参照PARTITION_INFORMATION_EX结构。
						IOCTL_DISK_GROW_PARTITION-扩大指定分区。
						IOCTL_DISK_IS_WRITABLE-确定指定磁盘是否可写。
						IOCTL_DISK_PERFORMANCE-启用并获取磁盘性能统计
						IOCTL_DISK_PERFORMANCE_OFF-关闭磁盘性能统计
						IOCTL_DISK_REASSIGN_BLOCKS-使磁盘设备影射一块区域做为它的备用存储块公用池（spare block pool）。
						IOCTL_DISK_SET_CACHE_INFORMATION-设置磁盘的配置信息
						IOCTL_DISK_SET_DRIVE_LAYOUT_EX-根据给定的磁盘信息对磁盘进行分区。
						IOCTL_DISK_SET_PARTITION_INFO_EX-设置指定分区的分区信息。包括AT和EFI (Extensible Firmware Interface)分区的布局信息。
						IOCTL_DISK_UPDATE_PROPERTIES-使缓冲的分区表无效并重新获取一份。
						IOCTL_DISK_VERIFY-对指定磁盘进行逻辑格式化
				lpInBuffer [in, optional]
    				（可选）指向输入缓冲区的指针。这些数据的格式取决于dwIoControlCode参数的值。如果dwIoControlCode指定不需要输入数据的操作，则此参数可以为NULL。
				nInBufferSize [in]
    				输入缓冲区以字节为单位的大小。单位为字节。
				lpOutBuffer [out, optional]
    				（可选）指向输出缓冲区的指针。这些数据的格式取决于dwIoControlCode参数的值。如果dwIoControlCode指定不返回数据的操作，则此参数可以为NULL。
				nOutBufferSize [in]
    				输出缓冲区以字节为单位的大小。单位为字节。    				
		3.函数返回值：
	G.GetCurrentDirectory
		0.函数功能：获取文件或程序当前路径
		1.函数原型：
			GetCurrentDirectory
			GetCurrentDirectoryA
			GetCurrentDirectoryW

#MFC控件
	C.CButton.
	C.CListCtrl



#GetLastError错误码列表
		〖0〗-操作成功完成。
		〖1〗-功能错误。
		〖2〗-系统找不到指定的文件。
		〖3〗-系统找不到指定的路径。
		〖4〗-系统无法打开文件。
		〖5〗-拒绝访问。
		〖6〗-句柄无效。
		〖7〗-存储控制块被损坏。
		〖8〗-存储空间不足，无法处理此命令。
		〖9〗-存储控制块地址无效。
		〖10〗-环境错误。
		〖11〗-试图加载格式错误的程序。
		〖12〗-访问码无效。
		〖13〗-数据无效。
		〖14〗-存储器不足，无法完成此操作。
		〖15〗-系统找不到指定的驱动器。
		〖16〗-无法删除目录。
		〖17〗-系统无法将文件移到不同的驱动器。
		〖18〗-没有更多文件。
		〖19〗-介质受写入保护。
		〖20〗-系统找不到指定的设备。
		〖21〗-设备未就绪。
		〖22〗-设备不识别此命令。
		〖23〗-数据错误 (循环冗余检查)。
		〖24〗-程序发出命令，但命令长度不正确。
		〖25〗-驱动器无法找出磁盘上特定区域或磁道的位置。
		〖26〗-无法访问指定的磁盘或软盘。
		〖27〗-驱动器找不到请求的扇区。
		〖28〗-打印机缺纸。
		〖29〗-系统无法写入指定的设备。
		〖30〗-系统无法从指定的设备上读取。
		〖31〗-连到系统上的设备没有发挥作用。
		〖32〗-进程无法访问文件，因为另一个程序正在使用此文件。
		〖33〗-进程无法访问文件，因为另一个程序已锁定文件的一部分。
		〖36〗-用来共享的打开文件过多。
		〖38〗-到达文件结尾。
		〖39〗-磁盘已满。
		〖50〗-不支持网络请求。
		〖51〗-远程计算机不可用 。
		〖52〗-在网络上已有重复的名称。
		〖53〗-找不到网络路径。
		〖54〗-网络忙。
		〖55〗-指定的网络资源或设备不再可用。
		〖56〗-已到达网络 BIOS 命令限制。
		〖57〗-网络适配器硬件出错。
		〖58〗-指定的服务器无法运行请求的操作。
		〖59〗-发生意外的网络错误。
		〖60〗-远程适配器不兼容。
		〖61〗-打印机队列已满。
		〖62〗-无法在服务器上获得用于保存待打印文件的空间。
		〖63〗-删除等候打印的文件。
		〖64〗-指定的网络名不再可用。
		〖65〗-拒绝网络访问。
		〖66〗-网络资源类型错误。
		〖67〗-找不到网络名。
		〖68〗-超过本地计算机网卡的名称限制。
		〖69〗-超出网络 BIOS 会话限制。
		〖70〗-远程服务器已暂停，或正在启动过程中。
		〖71〗-当前已无法再同此远程计算机连接，因为已达到计算机的连接数目极限。
		〖72〗-已暂停指定的打印机或磁盘设备。
		〖80〗-文件存在。
		〖82〗-无法创建目录或文件。
		〖83〗-INT 24 失败。
		〖84〗-无法取得处理此请求的存储空间。
		〖85〗-本地设备名已在使用中。
		〖86〗-指定的网络密码错误。
		〖87〗-参数错误。
		〖88〗-网络上发生写入错误。
		〖89〗-系统无法在此时启动另一个进程。
		〖100〗-无法创建另一个系统信号灯。
		〖101〗-另一个进程拥有独占的信号灯。
		〖102〗-已设置信号灯且无法关闭。
		〖103〗-无法再设置信号灯。
		〖104〗-无法在中断时请求独占的信号灯。
		〖105〗-此信号灯的前一个所有权已结束。
		〖107〗-程序停止，因为替代的软盘未插入。
		〖108〗-磁盘在使用中，或被另一个进程锁定。
		〖109〗-管道已结束。
		〖110〗-系统无法打开指定的设备或文件。
		〖111〗-文件名太长。
		〖112〗-磁盘空间不足。
		〖113〗-无法再获得内部文件的标识。
		〖114〗-目标内部文件的标识不正确。 〖117〗-应用程序制作的 IOCTL 调用错误。
		〖118〗-验证写入的切换参数值错误。
		〖119〗-系统不支持请求的命令。
		〖120〗-此功能只被此系统支持。
		〖121〗-信号灯超时时间已到。
		〖122〗-传递到系统调用的数据区太小。
		〖123〗-文件名、目录名或卷标语法不正确。
		〖124〗-系统调用级别错误。
		〖125〗-磁盘没有卷标。
		〖126〗-找不到指定的模块。
		〖127〗-找不到指定的程序。
		〖128〗-没有等候的子进程。
		〖130〗-试图使用操作(而非原始磁盘 I/O)的已打开磁盘分区的文件句柄。
		〖131〗-试图移动文件指针到文件开头之前。
		〖132〗-无法在指定的设备或文件上设置文件指针。
		〖133〗-包含先前加入驱动器的驱动器无法使用 JOIN 或 SUBST 命令。
		〖134〗-试图在已被合并的驱动器上使用 JOIN 或 SUBST 命令。
		〖135〗-试图在已被合并的驱动器上使用 JOIN 或 SUBST 命令。
		〖136〗-系统试图解除未合并驱动器的 JOIN。
		〖137〗-系统试图解除未替代驱动器的 SUBST。
		〖138〗-系统试图将驱动器合并到合并驱动器上的目录。
		〖139〗-系统试图将驱动器替代为替代驱动器上的目录。
		〖140〗-系统试图将驱动器合并到替代驱动器上的目录。
		〖141〗-系统试图替代驱动器为合并驱动器上的目录。
		〖142〗-系统无法在此时运行 JOIN 或 SUBST。
		〖143〗-系统无法将驱动器合并到或替代为相同驱动器上的目录。
		〖144〗-目录并非根目录下的子目录。
		〖145〗-目录非空。
		〖146〗-指定的路径已在替代中使用。
		〖147〗-资源不足，无法处理此命令。
		〖148〗-指定的路径无法在此时使用。
		〖149〗-企图将驱动器合并或替代为驱动器上目录是上一个替代的目标的驱动器。
		〖150〗-系统跟踪信息未在 CONFIG.SYS 文件中指定，或不允许跟踪。
		〖151〗-为 DosMuxSemWait 指定的信号灯事件个数错误。
		〖152〗-DosMuxSemWait 不可运行。已设置过多的信号灯。
		〖153〗-DosMuxSemWait 清单错误。
		〖154〗-输入的卷标超过目标文件系统的长度限制
		〖155〗-无法创建另一个线程。
		〖156〗-接收进程已拒绝此信号。
		〖157〗-段已被放弃且无法锁定。
		〖158〗-段已解除锁定。
		〖159〗-线程标识的地址错误。
		〖160〗-传递到 DosExecPgm 的参数字符串错误。
		〖161〗-指定的路径无效。
		〖162〗-信号已暂停。
		〖164〗-无法在系统中创建更多的线程。
		〖167〗-无法锁定文件区域。
		〖170〗-请求的资源在使用中。
		〖173〗-对于提供取消区域进行锁定的请求不明显。
		〖174〗-文件系统不支持锁定类型的最小单元更改。
		〖180〗-系统检测出错误的段号。
		〖183〗-当文件已存在时，无法创建该文件。
		〖186〗-传递的标志错误。
		〖187〗-找不到指定的系统信号灯名称。
		〖196〗-操作系统无法运行此应用程序。
		〖197〗-操作系统当前的配置不能运行此应用程序。
		〖199〗-操作系统无法运行此应用程序。
		〖200〗-代码段不可大于或等于 64K。
		〖203〗-操作系统找不到已输入的环境选项。
		〖205〗-命令子树中的进程没有信号处理程序。
		〖206〗-文件名或扩展名太长。
		〖207〗-第 2 环堆栈已被占用。
		〖208〗-没有正确输入文件名通配符 * 或 ?，或指定过多的文件名通配符。
		〖209〗-正在发送的信号错误。〖210〗-无法设置信号处理程序。
		〖212〗-段已锁定且无法重新分配。
		〖214〗-连到该程序或动态链接模块的动态链接模块太多。
		〖215〗-无法嵌套调用 LoadModule。
		〖230〗-管道状态无效。
		〖231〗-所有的管道实例都在使用中。
		〖232〗-管道正在关闭中。
		〖233〗-管道的另一端上无任何进程。
		〖234〗-更多数据可用。
		〖240〗-取消会话。
		〖254〗-指定的扩展属性名无效。
		〖255〗-扩展属性不一致。
		〖258〗-等待的操作过时。
		〖259〗-没有可用的数据了。
		〖266〗-无法使用复制功能。
		〖267〗-目录名无效。
		〖275〗-扩展属性在缓冲区中不适用。
		〖276〗-装在文件系统上的扩展属性文件已损坏。
		〖277〗-扩展属性表格文件已满。
		〖278〗-指定的扩展属性句柄无效。
		〖282〗-装入的文件系统不支持扩展属性。
		〖288〗-企图释放并非呼叫方所拥有的多用户终端运行程序。
		〖298〗-发向信号灯的请求过多。
		〖299〗-仅完成部分的 ReadProcessMemoty 或 WriteProcessMemory 请求。
		〖300〗-操作锁定请求被拒绝。
		〖301〗-系统接收了一个无效的操作锁定确认。
		〖487〗-试图访问无效的地址。
		〖534〗-算术结果超过 32 位。
		〖535〗-管道的另一端有一进程。
		〖536〗-等候打开管道另一端的进程。
		〖994〗-拒绝访问扩展属性。
		〖995〗-由于线程退出或应用程序请求，已放弃 I/O 操作。
		〖996〗-重叠 I/O 事件不在信号状态中。
		〖997〗-重叠 I/O 操作在进行中。
		〖998〗-内存分配访问无效。
		〖999〗-错误运行页内操作。
		〖1001〗-递归太深；栈溢出。
		〖1002〗-窗口无法在已发送的消息上操作。
		〖1003〗-无法完成此功能。
		〖1004〗-无效标志。
		〖1005〗-此卷不包含可识别的文件系统。请确定所有请求的文件系统驱动程序已加载，且此卷未损坏。
		〖1006〗-文件所在的卷已被外部改变，因此打开的文件不再有效。
		〖1007〗-无法在全屏幕模式下运行请求的操作。
		〖1008〗-试图引用不存在的令牌。
		〖1009〗-配置注册表数据库损坏。
		〖1010〗-配置注册表项无效。
		〖1011〗-无法打开配置注册表项。
		〖1012〗-无法读取配置注册表项。
		〖1013〗-无法写入配置注册表项。
		〖1014〗-注册表数据库中的某一文件必须使用记录或替代复制来恢复。恢复成功完成。
		〖1015〗-注册表损坏。包含注册表数据的某一文件结构损坏，或系统的文件内存映像损坏，或因为替代副本、日志缺少或损坏


#include <stdio.h>
#define my_printf(fmt,...) printf(fmt,##__VA_ARGS__)
#define TRACE_CDH(fmt,...)\
                printf("%s-%s--->>%s:%s(%d):"fmt, __DATE__,__TIME__,__FILE__,__FUNCTION__, __LINE__,##__VA_ARGS__)
//...和__VA_ARGS__ 对应 为可变参数 ##的作用当可变参数的个数为0时去掉前面的逗号 宏__STDC__的作用为实现是为标准 如果是标准为1 非标准为非1
//fmt是固定的
int main(int argc, char**argv)
{
                int a = 1;
                TRACE_CDH();//##作用在这 可变参数没有时 会把之前的逗号去掉
                my_printf("a=%d\n",a);// 如果逗号前面是fmt,这个形式的如果没有参数会报错  所以##要不要无所谓
                return 0;
}



GetBuffer(); 获取缓冲区至少几个字节。


#Windows磁盘容量计算
	磁盘块/簇（虚拟出来的）。 块是操作系统中最小的逻辑存储单位。操作系统与磁盘打交道的最小单位是磁盘块。
	扇区、块/簇、page的关系
	扇区： 硬盘的最小读写单元
	块/簇： 是操作系统针对硬盘读写的最小单元
	page： 是内存与操作系统之间操作的最小单元。
	扇区 <= 块/簇 <= page

#常用网址：
	1.https://wenku.baidu.com/view/73f3148ba200a6c30c22590102020740bf1ecd63.html?rec_flag=default
	2.https://wenku.baidu.com/view/1f14d363974bcf84b9d528ea81c758f5f61f2985.html
	3.http://www.elecfans.com/yuanqijian/jiekou/20180326652414_a.html
	4.https://docs.microsoft.com/zh-cn/windows-hardware/drivers/kernel/state-transitions-for-pnp-devices
	5.http://bbs.mydigit.cn/read.php?tid=331754
	6.https://docs.microsoft.com/zh-tw/windows/win32/api/ioapiset/nf-ioapiset-deviceiocontrol?redirectedfrom=MSDN
	7.https://docs.microsoft.com/zh-tw/windows/win32/fileio/disk-management-control-codes?redirectedfrom=MSDN