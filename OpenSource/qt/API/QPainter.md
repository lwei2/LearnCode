QPainter class 
========================
	QPainter类在小部件和其他绘制设备上执行低级绘制。
	QPainter提供了高度优化的功能来完成大多数绘图GUI程序所需要的。它可以画任何东西，从简单的线条到复杂的形状，比如馅饼和和弦。它还可以绘制对齐的文本和像素图。通常，它绘制一个“自然”坐标系，但它也可以进行视图和世界的转换。QPainter可以操作任何继承了QPaintDevice类的对象。
QPainter的常用用法是在小部件的绘制事件中:构造并自定义(例如设置钢笔或画笔)绘制器。然后画。记得在绘图后销毁QPainter对象。
	Header:	#include <QPainter>
	qmake: QT += gui 
	继承:QStylePainter

Public Functions
========================
	1.QPainter(QPaintDevice *device);
		-函数功能：构造一个立即开始绘制设备的绘制器。
		-函数参数：device-文件名
		-函数返回值：无
	2.QPainter();
		-函数功能：用构造一个绘制器。
		-函数参数：无
		-函数返回值：无
	3.		
	4.void drawArc(const QRectF &rectangle, int startAngle, int spanAngle);
		-函数功能：绘制由给定矩形、startAngle和spanAngle定义的弧。
		-函数参数：
		-函数返回值：无
#
	setClipRect

##