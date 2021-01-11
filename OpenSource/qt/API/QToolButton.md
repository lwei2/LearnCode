# QToolButton class - QToolButton类
	QToolButton类提供了命令或选项的快速访问按钮，通常在QToolBar中使用。
	头文件：	#include <QToolButton> 
	qmake： QT += widgets
	继承于：	QAbstractButton
	注意：该类的所有函数都是可重入。
## Public Types - 公有类型
	enum ToolButtonPopupMode 
	{ 
		DelayedPopup, 
		MenuButtonPopup, 
		InstantPopup 
	}
## Properties - 属性	
	arrowType : Qt::ArrowType
	autoRaise : bool
	popupMode : ToolButtonPopupMode
	toolButtonStyle : Qt::ToolButtonStyle 	
## Public Functions - 公有函数
	1.QToolButton(QWidget *parent = nullptr);
	2.virtual ~QToolButton();
	3.Qt::ArrowType arrowType() const;
	4.bool autoRaise() const;
	5.QAction *defaultAction() const;
	6.QMenu *menu() const;
	7.QToolButton::ToolButtonPopupMode popupMode() const;
	8.void setArrowType(Qt::ArrowType type);
	9.void setAutoRaise(bool enable);
	10.void setMenu(QMenu *menu);
	11.void setPopupMode(QToolButton::ToolButtonPopupMode mode);
	12.Qt::ToolButtonStyle toolButtonStyle() const;
