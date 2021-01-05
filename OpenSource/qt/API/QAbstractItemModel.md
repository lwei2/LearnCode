# QAbstractItemModel class - QAbstractItemModel类
	QAbstractItemModel类为项目模型类提供了抽象接口。
	头文件：	#include <QAbstractItemModel>
	基类为：	QObject
	继承于：	QAbstractListModel, QAbstractProxyModel, QAbstractTableModel, QConcatenateTablesProxyModel, QDirModel, QFileSystemModel, and QStandardItemModel
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