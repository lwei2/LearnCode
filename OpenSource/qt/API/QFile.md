# QFile class - QFile类
	QFile类提供了从文件读取和写入文件的接口。
	QFile是用于读写文本、二进制文件和资源的I/O设备。QFile可以自己使用，或者更方便地与QTextStream或QDataStream一起使用。
文件名通常在构造函数中传递，但是可以在任何时候使用setFileName()设置它。QFile期望文件分隔符为'/'，而与操作系统无关。不支持使用其他分隔符(例如'\')。
您可以使用exists()检查文件是否存在，并使用remove()删除文件。(QFileInfo和QDir提供了与文件系统相关的更高级操作。)
用open()打开文件，用close()关闭文件，用flush()刷新文件。数据通常使用QDataStream或QTextStream进行读写，但是您也可以调用qiodevice继承的函数read()、readLine()、readAll()和write()。QFile还继承了getChar()、putChar()和ungetChar()，它们一次只处理一个字符。
文件的大小由size()返回。可以使用pos()获取当前文件位置，也可以使用seek()移动到新的文件位置。如果已经到达文件的末尾，atEnd()返回true。
	头文件：	#include <QFile>
	继承于：	QFileDevice
	继承于：	QTemporaryFile
	QFile类所有成员列表，包括继承的成员。
	QFile类过时的成员。
	注意：该类的所有函数都是可重入。
## Public Types - 公有类型
	typedef DecoderFn
## Public Functions - 公有函数
	1.QFile::QFile(const QString &name, QObject *parent);
		-函数功能：构造带有给定父类的新file对象，以表示具有指定名称的文件。
		-函数参数：name-文件名， parent-父类
		-函数返回值：无
	2.QFile::QFile(QObject *parent);
		-函数功能：用给定的父对象构造一个新的file对象。
		-函数参数：parent-父类
		-函数返回值：无
	3.QFile::QFile(const QString &name);
		-函数功能：构造一个新的file对象来表示具有给定名称的文件。
		-函数参数：name-文件名
		-函数返回值：无
	4.QFile::QFile();
		-函数功能：构造一个QFile对象。
		-函数参数：无
		-函数返回值：无
	5.virtual QFile::~QFile();
		-函数功能：销毁文件对象，必要时关闭它。
		-函数参数：无
		-函数返回值：无
	6.bool QFile::copy(const QString &newName);
		-函数功能：销毁文件对象，必要时关闭它。
		-函数参数：无
		-函数返回值：无
	7.bool QFile::exists() const;
		-函数功能：销毁文件对象，必要时关闭它。
		-函数参数：无
		-函数返回值：无
	8.bool QFile::link(const QString &linkName);
		-是否重载：重载函数
		-函数功能：创建一个名为linkName的链接，该链接指向文件的文件名。链接是什么取决于底层的文件系统(在Windows上是快捷方式，在Unix上是符号链接)。
		-函数参数：linkName - 链接文件名
		-函数返回值：bool,成功返回：true,失败返回:false.
	9.bool QFile::open(FILE *fh, QIODevice::OpenMode mode, QFileDevice::FileHandleFlags handleFlags = DontCloseHandle);
		-是否重载：重载函数
		-函数功能：在给定模式下打开现有文件句柄fh。句柄标志可以用来指定其他选项。
		-函数参数：  fh - 文件指针对象名, mode - 打开文件的模式, handleFlags - 句柄标志
					mode如下：
						QIODevice::WriteOnly
		-函数返回值：bool,成功返回：true,失败返回:false.
	10.bool QFile::open(int fd, QIODevice::OpenMode mode, QFileDevice::FileHandleFlags handleFlags = DontCloseHandle);
	11.bool QFile::remove();
	12.bool QFile::rename(const QString &newName);
	13.void QFile::setFileName(const QString &name);
	14.QString QFile::symLinkTarget() const;


















