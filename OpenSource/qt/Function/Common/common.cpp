#include "common.h"

void Common::mainWidget()
{
	parentWidget *mainWidget;
	foreach(QWidget *widget, QApplication::topLevelWidget)
	{
		if(widget->isWindows() && widget->inhert("parentWidget"))
		{
			mainWidget = widget;				
		}
	}
}