Qt
===========================
	第一章. Qt简介
	第二章.


# 第一章.Qt简介
>	Qt是一个跨平台应用程序和UI开发框架。使用Qt只需一次性开发应用程序，无须重新编写源代码，便可跨不同桌面和嵌入式操作系统部署这些应用程序。Qt Software 的前身为创始于1994年的Trolltech（奇趣科技），Trolltech于2008年6月被 Nokia 收购，加速了其跨平台开发战略，2011年3月Qt被芬兰的Digia公司收购。
>	Qt Creator是全新的跨平台 Qt IDE（集成开发环境），可单独使用，也可与 Qt 库和开发工具组成一套完整的SDK（软件开发工具包 ）。其中包括：高级 C++ 代码编辑器、项目和生成管理工具、集成的上下文相关的帮助系统、图形化调试器、代码管理和浏览工具。
>	

## Qt环境搭建	
	MinGW即Minimalist GNU For Windows，是将GNU开发工具移植到Win32平台下的产物，是一套Windows上的GNU工具集。用其开发的程序不需要额外的第三方DLL支持就可以直接在Windows下运行。更多内容请查看http://www.mingw.org 。
## Qt 安装

## Qt 编译
	1.显示版本信息:
		# qmake -v 
	2.生成makefile
		# qmake *.pro

## Qt源码编译
>	在默认情况下，用QtCreator编译程序时，使用的是动态编译。编译好的程序在运行时需要另外加上相应的Qt库文件，一大堆dll文件。如果想将生成的程序连同所需要的库一起完整地打包成一个可执行程序，那就需要使用静态编译。Qt官方不提供静态编译好的安装包，所以需要我们在自己的电脑上静态编译。而且exe文件会比动态编译的要小上很多。
	1.下载Qt源码
		#Qt最新版的源码下载地址：Index of /archive/qt/xxx/xxx.xx/
	2.根据Qt官方文档和编译平台下载相关的工具。
		关于Windows平台下编译源码，需下载如下工具：
		2.1 下载安装ActivePerl
			> perl.exe -v  //检查版本，判断是否已经安装成功
		2.2 下载安装Python
			> python.exe 	//同上
		2.3 下载安装Ruby				
			> ruby.exe
	3.选择编译环境,例如：VS xxx的开发人员命令提示符
	4.编译并安装
		4.1 进入Qt解压后的源码路径下
		4.2 修改源码配置文件qtbase\mkspecs\common\msvc-desktop.conf文件，即
			-MD修改为-MT,-MDd修改为-MTd。D是动态编译(dynamic)，T是静态编译（static）。
		4.3 配置编译环境：
			configure.bat 
				-static //指明是静态编译
				-prefix "D:\qt" //指明安装的目录
				-confirm-license -opensource  //指明是开源版本的qt
				-debug-and-release //指明需要debug版和release版，可以单独选择release版
				-platform win32-msvc  //指明使用msvc编译
				-nomake examples -nomake tests  //不编译样例
				-plugin-sql-sqlite -plugin-sql-odbc -qt-zlib -qt-libpng -qt-libjpeg //可选插件
				-opengl desktop 
				-mp //多核编译
			例如：configure.bat -static -prefix "D:\Qt\Src\qt-static-src-5.14.1" -confirm-license -opensource  -debug-and-release -platform win32-msvc  -nomake examples -nomake tests  -plugin-sql-sqlite -plugin-sql-odbc -qt-zlib -qt-libpng -qt-libjpeg -opengl desktop -mp
		4.4 编译，即 > nmake && nmake install 
		4.5 选择构建套件，Qt版本选择刚添加的静态版
			4.5 配置套件时，需要下载WINSDK:https://download.microsoft.com/download/4/2/2/42245968-6A79-4DA7-A5FB-08C0AD0AE661/windowssdk/winsdksetup.exe,只选择Debugging Toolsfor Windows按照即可。套件就不会有感叹号！
## 不同平台下的应用程序设置图标
	1.Linux平台
	2.Windows平台
		1.1创建.ico文件，将ico图标文件复制到工程文件夹。
		1.2修改项目文件.pro文件，添加RC_ICONS = xxx.ico
	3.MacOS平台

## Qt控件

	2.QGridLayout
	1.QWidget
	2.QTableWidget

	QWidget类是所有用户界面对象的基类，被称为基础窗口部件。QWidget继承自QObject类和QPaintDevice类，其中QObject类是所有支持Qt对象模型（Qt Object Model）的Qt对象的的基类，QPaintDevice类是所有可以绘制的对象的基类。
	QImage和QPixmap区别：QPixmap是专门为绘图而生，当需要绘制图片时你需要使用QPixmap。QImage则是为I/O，为图片像素访问以及修改而设计的。如果你想访问图片的像素或是修改图片像素，则需要使用QImage，或者借助于QPainter来操作像素。另外跟QImage不同是，QPixmap跟硬件是相关的，如X11, Mac 以及 Symbian平台上，QPixmap 是存储在服务器端，而QImage则是存储在客户端，在Windows平台上，QPixmap和QImage都是存储在客户端，并不使用任何的GDI资源。

	1. 相對位置：每個Qwidget都能通過pos()獲取到相對自己父類窗口的位置，
	2. 絕對位置：pWidget->mapToGlobal(QPoint(0,0)) ;將當前控件的相對位置轉換為屏幕絕對位置
	3. 絕對位置轉為相對位置： pWidget->mapFromGlobal(QPoint(0,0)), 將絕對位置對應到控件的相對位置

###巧记口诀
@控件
	布局格式分天下，横竖网络表分组。	
	水平垂直间隔中，六大按钮聚一堂。
	PTRCD一触即发，基础模型看视图。
	列表树列撤销行，基础控件列树表。
@特殊
	横竖坐标x与y，二者合为一点点。
	

###QComboBox
	QComboBox *pComboBox;
	1.去掉控件直角
	pComboBox->view()->window()->setWindowFlags(Qt::Popup | Qt::FramelessWindowHint | Qt::NoDropShadowWindowHint);		
	2.

###QGridLayout
	QGridLayout *pGridLayout = new QGridLayout;
	1.设置间距(水平或垂直)
		pGridLayout->setSpacing
		setSpacing()可以同时设置水平、垂直间距，设置之后，水平、垂直间距相同。
		setHorizontalSpacing()、setVerticalSpacing()可以分别设置水平间距、垂直间距。
	1.设置布局内部四边的空隙
		pGridLayout->setContentsMargins(int x, int y, int w, int h);

###QLineEdit
	QLineEdit *pLineEdit = new QLineEdit;
	1.设置字体
		pLineEdit->setFont(QFont("字体",字体大小，粗细));
		pLineEdit->setFont(QFont("Timers" , 28 ,  QFont::Bold));
	2.设置无右键菜单
		pLineEdit->setContextMenuPolicy(Qt::NoContextMenu);
	3.设置提示语
		pLineEdit->setPlaceholderText(QString("提示语"));
	4.设置密码模式不可见
		pLineEdit->setEchoMode(QLineEdit::Password);
	5.设置样式
		pLineEdit->setStyleSheet("QLineEdit{border-width: 1px; border-radius: 4px; font-size:12px; color: black; border:1px solid gray;}"
  "QLineEdit:hover{border-width: 1px; border-radius: 4px; font-size:12px; color: black; border:1px solid rgb(70, 200, 50);}");
 	6.设置最大位数
 		pLineEdit->setMaxLength(int n);
 		focusout
###QLayout
	1.oid QLayout::setContentsMargins （ int left， int top， int right， int bottom ）
	左上右下

###QDirModel
	QDirModel *pDirModel = new QDirModel(this);
	1.设置当前路径为默认路径：
	pDirModel->index(int row, int column, QModelIndex());//QDir::currentPath();

###QPushButton
	1.设置样式
		1.1 黑色悬停
	/* Black Button 1*/
	QPushButton#BlackButton {
	    border-radius: 8px;
	    color: white;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    background-color: white;
	    color: black;
	    border: 2px solid #555555;
	}
	QPushButton#BlackButton:hover {
	    background-color: #555555;
	    color: white;
	}
	QPushButton#BlackButton:pressed {
	    background-color: #06AD56;
	}
	/* Black Button 2 */
	QPushButton#BlackButton2 {
	    background-color: #555555;
	    border-radius: 8px;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    color: white;
	}
	QPushButton#BlackButton2:hover {
	    background-color: white;
	    border: 2px solid #555555;
	    color: black
	}
	QPushButton#BlackButton2:pressed {
	    background-color: #06AD56;
	}
	1.2 灰色悬停
	/* Gray Button */
	QPushButton#GrayButton {
	    border-radius: 8px;
	    color: white;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    background-color: white;
	    color: black;
	    border: 2px solid #e7e7e7;
	}
	QPushButton#GrayButton:hover {
	    background-color: #e7e7e7;
	    color: white;
	}
	QPushButton#GrayButton:pressed {
	    background-color: #06AD56;
	}		
	/* Gray Button 2 */
	QPushButton#GrayButton2 {
	    background-color: #e7e7e7;
	    border-radius: 8px;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    color: white;
	}
	QPushButton#GrayButton2:hover {
	    background-color: white;
	    border: 2px solid #e7e7e7;
	    color: black
	}
	QPushButton#GrayButton2:pressed {
	    background-color: #06AD56;
	}
	1.3 红色悬停
	/* Red Button */
	QPushButton#RedButton {
	    border-radius: 8px;
	    color: white;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    background-color: white;
	    color: black;
	    border: 2px solid #f44336;
	}
	QPushButton#RedButton:hover {
	    background-color: #f44336;
	    color: white;
	}
	QPushButton#RedButton:pressed {
	    background-color: #06AD56;
	}
	/* Red Button 2 */
	QPushButton#RedButton2 {
	    background-color: #f44336;
	    border-radius: 8px;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    color: white;
	}
	QPushButton#RedButton2:hover {
	    background-color: white;
	    border: 2px solid #f44336;
	    color: black
	}
	QPushButton#RedButton2:pressed {
	    background-color: #06AD56;
	}
	1.4 蓝色悬停
	/* Blue Button */
	QPushButton#BlueButton {
	    border-radius: 8px;
	    color: white;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    background-color: white;
	    color: black;
	    border: 2px solid #008cba;
	}
	QPushButton#BlueButton:hover {
	    background-color: #008cba;
	    color: white;
	}
	QPushButton#BlueButton:pressed {
	    background-color: #06AD56;
	}
	/* Blue Button 2 */
QPushButton#BlueButton2 {
    background-color: #008cba;
    border-radius: 8px;
    padding: 16px 32px;
    text-align: center;
    text-decoration: none;
    font-size: 16px;
    margin: 4px 2px;
    color: white;
}
QPushButton#BlueButton2:hover {
    background-color: white;
    border: 2px solid #008cba;
    color: black
}
QPushButton#BlueButton2:pressed {
    background-color: #06AD56;
}
	1.5绿色悬停
	/* Green Button */
	QPushButton#GreenButton {
	    border-radius: 8px;
	    color: white;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    background-color: white;
	    color: black;
	    border: 2px solid #4CAF50;
	}
	QPushButton#GreenButton:hover {
	    background-color: #4CAF50;
	    color: white;
	}
	QPushButton#GreenButton:pressed {
	    background-color: #06AD56;
	}		
	/* Green Button 2 */
	QPushButton#GreenButton2 {
	    background-color: #4CAF50;
	    border-radius: 8px;
	    padding: 16px 32px;
	    text-align: center;
	    text-decoration: none;
	    font-size: 16px;
	    margin: 4px 2px;
	    color: white;
	}
	QPushButton#GreenButton2:hover {
	    background-color: white;
	    border: 2px solid #4CAF50;
	    color: black
	}
	QPushButton#GreenButton2:pressed {
	    background-color: #06AD56;
	}

###QTableView
	1.		
###QTableWidget
	QTableWidget *pTableView;
	1.设置列数：
		pTableView->setColumnCount(int columns);//columns列数
	2.设置默认列表尺寸：
		horizontalHeader()->setDefaultSectionSize(大小);
	3.设置表头文字
		调用函数：setHorizontalHeaderLabels(QStringList &header);
		实现例子：	QStringList header;
					header<<Item1<<Item2<<Item3<<……；
					pTableView->setHorizontalHeaderLabels(header);
	4.设置列布满控件
		horizontalHeader()->setStretchLastSection(true);
	5.设置默认列大小
		verticalHeader()->setDefaultSectionSize(10);
	6.设置无边框
		setFrameShape(QFrame::NoFrame);
	7.设置去掉格子线
		setShowGrid(false);
	8.设置多选
		setSelectionMode(QAbstractItemView::ExtendedSelection);
	9.设置垂直头不可见
		pTableView->verticalHeader()->setVisible(false);		
	10.设置选择行时为单行
		m_pTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
	11.不可编辑
		m_pTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	12.去掉表头
		m_pTableWidget->horizontalHeader()->setVisible(false);//去掉表头
		m_pTableWidget->verticalHeader()->setVisible(false);
	13.合并单元格
		m_pTableWidget->setSpan(x,y,width, heigth);//x-横坐标，y-纵坐标，width-要改变的行数，heigth-要改变的列数
	14.自适应
		m_pTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    	m_pTableWidget->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    15.增加
    16.删除行
    	m_pTableWidget->removeRow(m_pTableWidget->currentRow());//当前行


###QSplitter
	QSplitter	*pSplitter = new QSplitter;
	1.添加控件：
		QSplitter->addWidget(QWidget *);
	2.分割比例
		QSplitter->setStretchFactor(int index, int stretch);//index-分割区域，stretch-分割比例
###QSpacerItem






## Qt的事件循环机制
	Qt中常见的事件有哪些？鼠标事件(QMouseEvent)、键盘事件(QKeyEvent)、绘制事件(QPaintEvent)、窗口尺寸改变(QResizeEvent)、滚动事件(QScrollEvent)、控件显示(QShowEvent)、控件隐藏(QHideEvent)、定时器事件(QTimerEvent)等等
	Qt是事件驱动的，Qt将系统产生的信号(软件中断)转换成Qt事件，并且将事件封装成类，所有的事件类都是由QEvent派生的，事件的产生和处理就是Qt程序的主轴，且伴随着整个程序的运行周期。因此我们说，Qt是事件驱动的。

问题3：Qt事件是由谁产生的？Qt是如何将信号转换成事件的？

	答：Qt的官方手册说，事件有两个来源：程序外部和程序内部，多数情况下来自操作系统并且通过spontaneous()函数返回true来获知事件来自于程序外部，当spontaneous()返回false时说明事件来自于程序内部。

问题4：Qt事件是由谁接收的？

答：QObject！它是所有Qt类的基类！是Qt对象模型的核心！QObject类的三大核心功能其中之一就是：事件处理。QObject通过event()函数调用获取事件。所有的需要处理事件的类都必须继承自Qobject，可以通过重定义event()函数实现自定义事件处理或者将事件交给父类。

问题5：事件处理的流程是什么样的？

答：事件有别于信号的重要一点：事件是一个类对象具有特定的类型，事件多数情况下是被分发到一个队列中(事件队列)，当队列中有事件时就不停的将队列中的事件发送给QObject对象，当队列为空时就阻塞地等待事件，这个过程就是事件循环！

QCoreApplication::exec()开启了这种循环，一直到QCoreApplication::exit()被调用才终止，所以说事件循环是伴随着Qt程序的整个运行周期！

另外一种同步处理情形是通过sendEvent()将事件发送出去，直接进入事件的传送和处理流程。

## Qt信号与槽机制
	
## Qt多线程
### 相关概念
	1.程序和进程的区别
		进程是动态的，程序是静态的；进程是暂时的，程序是永久的，进程是通过程序运行时得到的。
		进程是一个数据文件，进程是内存中动态运行的运行实体，用来存储数据段、代码段、指针等。
		一个程序可能对应多个进程。一个进程可能包含多个程序。
		进程是操作系统资源分配的基本单位，线程是操作系统调度执行的基本单位。每个进程包含一个或多个线程，并且每个线程都可以共享进行的资源。每个都可以共享进程的资源。线程是CPU调度和分派的基本单位，它是比进程更小的独立运行基本单位。线程不能脱离进程进行单独存在，只能依赖进程。
		在任意线程里都可以创建和撤销其他线程。一个线程死掉等于整个进程死掉。多进程的程序比多线程的程序简装，缺点在于进程切换时效率变差。
	2.Qt中的线程是以对象的形式，继承于QThread类存在的。		
		2.1 启动函数,将会执行run()函数,并且发射信号started().
			void start()[slot]
			void started() [signal]			//信号成员函数,表示该线程已启动
		2.2 线程体函数,需要用户自定义该函数执行的内容,内容里也可以使用exec()实现事件循环
			void run ();
		2.3 信号成员函数,表示该线程执行完成,已经在run()函数中return.			
			void finished () [signal]
		2.4 强制结束正在进行的线程(不推荐,因为不会考虑资源释放), 并且发射信号terminated () 
			void terminate() [slot]
			void QThread::terminated () [signal]		//信号成员函数,表示该线程已停止
		2.5 告诉线程事件循环退出，返回0表示成功，相当于调用了QThread::exit(0)。 		
			void quit();
		2.6 休眠当前线程秒,毫秒,微妙
			sleep ( unsigned long secs )、msleep()、usleep()、
		2.7 设置正在运行的线程优先级,必须在调用start()启动线程之后设置才有用
			void setPriority(Priority priority);
		2.8 线程是否结束 
			bool isFinished() const 
		2.9 线程是否正在运行 		
			bool isRunning() const 			
		2.10 阻塞等待线程执行结束,如果time(单位毫秒)时间结束,线程还未结束,则返回false,否则返回true,如果time= ULONG_MAX,则表示一直等待		 
			bool wait ( unsigned long time = ULONG_MAX );		
	3.在多线程里,一般都是自定义结束函数来结束进程.多个线程执行时,有可能某个线程会需要等到另一个线程的结果才能执行,可以通wait()成员函数实现,等待另一个线程完成.
	4.当一个全局的共有资源被多个线程同时调用时,则称该资源为临界资源,并且该资源需要使用QMutex互斥类,来保证线程间的互斥,避免同一时刻访问临界资源而出现意想不到的问题.如果多个不同的临界资源只对应一个线程锁的话,则会降低并发效率.
		3.1 获取锁,如果锁已经被其它线程获取,则将会阻塞并While等待锁释放
			void lock();
		3.2 尝试获取锁, 如果获得了锁，该函数返回true,如果另一个线程锁定了互斥锁，则该函数立即返回false。 
			bool tryLock ();		
		3.3 释放锁
		void unlock();
	5.信号量是特殊的线程锁,内部通过一个资源值,来使得N个线程可以同时访问临界资源		
		5.1 试图获取由信号量保护的n个资源。如果n是不可用的，这个调用将阻塞，直到有足够的资源可用为止。
			void acquire ( int n = 1 );
		5.2 尝试获取由信号量保护的n个资源，并在成功时返回true。如果不可用，这个调用立即返回false，并不需要获得任何资源。
			void tryAcquire ( int n = 1 );
		5.3 返回信号量当前可用的资源数量
			int available () ;
		5.4 释放由信号量保护的n个资源。
			void release ( int n = 1 );
## MVC
	Model-View-Controller (MVC)是一種源自Smalltalk的設計模式，通常用於構建用戶界面。在設計模式中，Gamma等人寫道:
MVC由三種對象組成。模型是應用程序對象，視圖是它的屏幕表示，控制器定義了用戶界面對用戶輸入的反應方式。在MVC之前，用戶界面(GUI)設計傾向於將這些對象放在一起。MVC將它們解耦以增加靈活性和重用。
在QT中的控制器則為委託(Delegate)，委託呈現數據項，當一個項目被編輯時，委託直接使用模型索引與模型通信。



##Qt文件说明
	在项目文件夹中生成的.pro.user文件，它包含了本地构建信息，包含Qt版本和构建目录等。

## Qt Qss	
	Qt Style Sheets。Qt样式表（以下统称QSS）的术语和语法规则几乎和CSS相同
  Qt样式表属性说明：
	属性1：控件背景设置
        background-image      
	border:边框像素设置
	margin:坐标位置
		margin-top
		margin-left
		margin-bottom
		margin-right
CSS边界样式及示例	说明
margin-top:10px;	上边界值
margin-right:10px;	右边界值
margin-bottom:10px;	下边界值
margin-left:10px;	左边界值
		
	颜色：
		RGB/rgb(255,0,0) 		- 红色
		RGB/rgb(255,255,255) 	- 白色 

##Qt绘制事件
  当应用程序收到绘制事件，会调用QWidget::paintEvent()。该函数就是绘制窗口的地方。
  重绘窗口，有两种办法：update()和repaint()
  update()-把重绘事件添加到事件队列中
    1.重复调用update()会被Qt合并为一次
    2.不会产生图像闪烁
    3.可带参数指定重绘某个区域。

##事件


###拖拽事件
	拖放（Drag and Drop），通常會簡稱為DnD，是現代軟件開發中必不可少的一項技術。它提供了一種能夠在應用程序內部甚至是應用程序之間進行信息交換的機制。操作系統與應用程序之間進行的剪貼板內容的交換，也可以被認為是拖放的一部分。
	拖放其實是由兩部分組成的：拖動和釋放。拖動是將被拖放對象進行移動，釋放是將被拖放對象放下。前者是一個按下鼠標按鍵並移動的過程，後者是一個鬆開鼠標按鍵的過程；通常這兩個操作之間的鼠標按鍵是被一直按下的。當然，這只是一種普遍的情況，其它情況還是要看應用程序的具體實現。對於Qt 而言，一個組件既可以作為被拖動對象進行拖動，也可以作為釋放掉的目的地對象，或者二者都是。

##Qt支持的字体
Qt 支持的中文字体的名称
	“Arial Unicode MS” 
	“Fixedsys” 
	“SimSun-ExtB” 
	“System” 
	“Terminal” 
	“仿宋” 
	“华文中宋” 
	“华文仿宋” 
	“华文宋体” 
	“华文彩云” 
	“华文新魏” 
	“华文楷体” 
	“华文琥珀” 
	“华文细黑” 
	“华文行楷” 
	“华文隶书” 
	“宋体” 
	“幼圆” 
	“微软雅黑” 
	“新宋体” 
	“方正姚体” 
	“方正舒体” 
	“楷体” 
	“隶书” 
	“黑体”

代码：

{
    QFontDatabase database;
    foreach(const QString &family, database.families(QFontDatabase::SimplifiedChinese))
    {
        qDebug() << family;
    }
}
//以上这段代码就可以枚举出系统中所有支持中文的字体名称。

Qt支持的其他字体的名称

“Aharoni” 
“Andalus” 
“Angsana New” 
“AngsanaUPC” 
“Aparajita” 
“Arabic Typesetting” 
“Arial” 
“Arial Black” 
“Arial Narrow” 
“Arial Unicode MS” 
“Batang” 
“BatangChe” 
“Book Antiqua” 
“Bookman Old Style” 
“Bookshelf Symbol 7” 
“Browallia New” 
“BrowalliaUPC” 
“Calibri” 
“Calibri Light” 
“Cambria” 
“Cambria Math” 
“Candara” 
“Century” 
“Century Gothic” 
“Comic Sans MS” 
“Consolas” 
“Constantia” 
“Corbel” 
“Cordia New” 
“CordiaUPC” 
“Courier” 
“Courier New” 
“DaunPenh” 
“David” 
“DFKai-SB” 
“DilleniaUPC” 
“DokChampa” 
“Dotum” 
“DotumChe” 
“Ebrima” 
“Estrangelo Edessa” 
“EucrosiaUPC” 
“Euphemia” 
“Fixedsys” 
“Franklin Gothic Medium” 
“FrankRuehl” 
“FreesiaUPC” 
“Gabriola” 
“Garamond” 
“Gautami” 
“Georgia” 
“Gisha” 
“Gulim” 
“GulimChe” 
“Gungsuh” 
“GungsuhChe” 
“Impact” 
“IrisUPC” 
“Iskoola Pota” 
“JasmineUPC” 
“Kalinga” 
“Kartika” 
“Khmer UI” 
“KodchiangUPC” 
“Kokila” 
“Lao UI” 
“Latha” 
“Leelawadee” 
“Levenim MT” 
“LilyUPC” 
“Lucida Console” 
“Lucida Sans Unicode” 
“Malgun Gothic” 
“Mangal” 
“Marlett” 
“Meiryo” 
“Meiryo UI” 
“Microsoft Himalaya” 
“Microsoft JhengHei” 
“Microsoft New Tai Lue” 
“Microsoft PhagsPa” 
“Microsoft Sans Serif” 
“Microsoft Tai Le” 
“Microsoft Uighur” 
“Microsoft Yi Baiti” 
“MingLiU” 
“MingLiU-ExtB” 
“MingLiU_HKSCS” 
“MingLiU_HKSCS-ExtB” 
“Miriam” 
“Miriam Fixed” 
“Modern” 
“Mongolian Baiti” 
“Monotype Corsiva” 
“MoolBoran” 
“MS Gothic” 
“MS Mincho” 
“MS Outlook” 
“MS PGothic” 
“MS PMincho” 
“MS Reference Sans Serif” 
“MS Reference Specialty” 
“MS Sans Serif” 
“MS Serif” 
“MS UI Gothic” 
“MT Extra” 
“MV Boli” 
“Narkisim” 
“Nyala” 
“Palatino Linotype” 
“Plantagenet Cherokee” 
“PMingLiU” 
“PMingLiU-ExtB” 
“Raavi” 
“Rod” 
“Roman” 
“Sakkal Majalla” 
“Script” 
“Segoe Print” 
“Segoe Script” 
“Segoe UI” 
“Segoe UI Light” 
“Segoe UI Semibold” 
“Segoe UI Symbol” 
“Shonar Bangla” 
“Shruti” 
“Simplified Arabic” 
“Simplified Arabic Fixed” 
“SimSun-ExtB” 
“Small Fonts” 
“Sylfaen” 
“Symbol” 
“System” 
“Tahoma” 
“Terminal” 
“Times New Roman” 
“Traditional Arabic” 
“Trebuchet MS” 
“Tunga” 
“Utsaah” 
“Vani” 
“Verdana” 
“Vijaya” 
“Vrinda” 
“Webdings” 
“Wingdings” 
“Wingdings 2” 
“Wingdings 3” 


{
    QFontDatabase database;
    foreach(const QString &family, database.families())
    {
        qDebug() << family;
    }
}
//以上这段代码就可以枚举出系统支持的所有字体的名称；

中文字体名称对应的字体英文名称

宋体 SimSun 
黑体 SimHei 
微软雅黑 Microsoft YaHei 
微软正黑体 Microsoft JhengHei 
新宋体 NSimSun 
新细明体 PMingLiU 
细明体 MingLiU 
标楷体 DFKai-SB 
仿宋 FangSong 
楷体 KaiTi 
仿宋_GB2312 FangSong_GB2312 
楷体_GB2312 KaiTi_GB2312

宋体：SimSuncss中中文字体（font-family）的英文名称 
Mac OS的一些： 
华文细黑：STHeiti Light [STXihei] 
华文黑体：STHeiti 
华文楷体：STKaiti 
华文宋体：STSong 
华文仿宋：STFangsong 
儷黑 Pro：LiHei Pro Medium 
儷宋 Pro：LiSong Pro Light 
標楷體：BiauKai 
蘋果儷中黑：Apple LiGothic Medium 
蘋果儷細宋：Apple LiSung Light 
Windows的一些： 
新細明體：PMingLiU 
細明體：MingLiU 
標楷體：DFKai-SB 
黑体：SimHei 
新宋体：NSimSun 
仿宋：FangSong 
楷体：KaiTi 
仿宋_GB2312：FangSong_GB2312 
楷体_GB2312：KaiTi_GB2312 
微軟正黑體：Microsoft JhengHei 
微软雅黑体：Microsoft YaHei 
装Office会生出来的一些： 
隶书：LiSu 
幼圆：YouYuan 
华文细黑：STXihei 
华文楷体：STKaiti 
华文宋体：STSong 
华文中宋：STZhongsong 
华文仿宋：STFangsong 
方正舒体：FZShuTi 
方正姚体：FZYaoti 
华文彩云：STCaiyun 
华文琥珀：STHupo 
华文隶书：STLiti 
华文行楷：STXingkai 
华文新魏：STXinwei

##加载第三方字体
	https://fontstorage.com
	https://www.dafont.com/
	https://www.fonts.com/font/monotype/arial/medium
	https://imageshack.com/

字体库转换
	https://convertio.co/zh/font-converter/


##不懂
	mapToGlobal和mapFromGlobal
	相對位置：每個Qwidget都能通過pos()獲取到相對自己父類窗口的位置，
	絕對位置：pWidget->mapToGlobal(QPoint(0,0)) ;將當前控件的相對位置轉換為屏幕絕對位置
	絕對位置轉為相對位置： pWidget->mapFromGlobal(QPoint(0,0)), 將絕對位置對應到控件的相對位置


## 常见错误小结
	1. 提示:cannot find -lGL
	如何解决：
	2.Qt Run-time Check Failure #2
		内存越界
		
