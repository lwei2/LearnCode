#QThread Class  - QThread类
	头文件 :#include <QThread>
	qmake: QT += core
	继承于: QObject
#Public Type - 共有类型
	enum Priority 
	{ 	
		IdlePriority, 
		LowestPriority, 
		LowPriority, 
		NormalPriority, 
		HighPriority, 
		…, 
		InheritPriority 
	}
#Public Functions - 共有函数
	1.QThread();
	2.~QThread();
	3.QAbstractEventDispatcher *eventDispatcher() const;
	4.
	5.

