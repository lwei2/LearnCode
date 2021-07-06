# QAbstractTableModel class - QAbstractTableModel
	QAbstractTableModel类提供了一个抽象模型，它可以被子类化来创建表模型。
	header:	#include <QAbstractTableModel>
	qmake : QT += core
	Inherits:QAbstractItemModel

## Public Types - 公有类型
	enum CaretMode { CaretAtZero, CaretAtOffset, CaretWontMatch }
	enum PatternSyntax { RegExp, RegExp2, Wildcard, WildcardUnix, FixedString, W3CXmlSchema11 }
## Public Functions - 公有函数
	1.QAbstractTableModel(QObject *parent = nullptr);
		-函数功能：构造函数。
		-函数参数：parent-父类。
		-函数返回值：无
	2.virtual ~QAbstractTableModel();
		-函数功能：析构函数。
		-函数参数：无
		-函数返回值：无
