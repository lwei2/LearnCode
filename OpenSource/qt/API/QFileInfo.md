# QFileInfo class - QFileInfo类
	QFileInfo类提供与系统无关的文件信息。
	QFileInfo提供有关文件名称和文件系统中的位置(路径)、其访问权限以及它是目录还是符号链接等信息。文件的大小和最后的修改/读取时间也是可用的。QFileInfo还可以用来获取关于Qt资源的信息。
	QFileInfo可以指向一个具有相对或绝对文件路径的文件。绝对文件路径以目录分隔符“/”(或Windows上的驱动器规范)开始。相对文件名以目录名或文件名开头，并指定相对于当前工作目录的路径。绝对路径的一个例子是字符串"/tmp/quartz"。一个相对路径可能看起来像“src/	fatlib”。您可以使用isRelative()函数来检查QFileInfo是使用相对路径还是绝对文件路径。您可以调用makeAbsolute()函数来将相对QFileInfo路径转换为绝对路径。
	头文件：	#include <QFileInfo>
	QT += core
	继承于：	QAbstractListModel, QAbstractProxyModel, QAbstractTableModel, QConcatenateTablesProxyModel, QDirModel, QFileSystemModel, and QStandardItemModel
	QFile类所有成员列表，包括继承的成员。
	QFile类过时的成员。
	注意：该类的所有函数都是可重入。
## Public Types - 公有类型
	typedef DecoderFn
## Public Functions - 公有函数
	1.QFileInfo::QFileInfo(QObject *parent = nullptr);
		-函数功能：构造带有给定父类的新file对象，以表示具有指定名称的文件。
		-函数参数：name-文件名， parent-父类
		-函数返回值：无
	2.	