# QFile class - QFile类
	QFile类提供了从文件读取和写入文件的接口。
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
	7.bool QFile::exists() const;
	8.bool QFile::link(const QString &linkName);
	9.bool QFile::open(FILE *fh, QIODevice::OpenMode mode, QFileDevice::FileHandleFlags handleFlags = DontCloseHandle);
	10.bool QFile::open(int fd, QIODevice::OpenMode mode, QFileDevice::FileHandleFlags handleFlags = DontCloseHandle);
	11.bool QFile::remove();
	12.bool QFile::rename(const QString &newName);
	13.void QFile::setFileName(const QString &name);
	14.QString QFile::symLinkTarget() const;
