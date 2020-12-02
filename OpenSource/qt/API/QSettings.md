#QSettings Class - QSettings 类
	QSettings类提供了独立于平台的持久应用程序设置。
	头文件：	#include <QSettings>
	继承于：	QObject
	注意:这个类中的所有函数都是可重入的。
## Public Types - 公有类型
	enum Format { NativeFormat, Registry32Format, Registry64Format, IniFormat, InvalidFormat }
	typedef ReadFunc
	enum Scope { UserScope, SystemScope }
	typedef SettingsMap
	enum Status { NoError, AccessError, FormatError }
	typedef WriteFunc
## Public Functions - 公有函数
	1.QSettings(QSettings::Scope scope, QObject *parent = nullptr)；
	2.

