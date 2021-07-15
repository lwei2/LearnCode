QPainter class 
========================
	QPainter类在小部件和其他绘制设备上执行低级绘制。
	QPainter提供了高度优化的功能来完成大多数绘图GUI程序所需要的。它可以画任何东西，从简单的线条到复杂的形状，比如馅饼和和弦。它还可以绘制对齐的文本和像素图。通常，它绘制一个“自然”坐标系，但它也可以进行视图和世界的转换。QPainter可以操作任何继承了QPaintDevice类的对象。
QPainter的常用用法是在小部件的绘制事件中:构造并自定义(例如设置钢笔或画笔)绘制器。然后画。记得在绘图后销毁QPainter对象。
	Header:	#include <QPainter>
	qmake: QT += gui 
	继承:QStylePainter

#
	setClipRect

##