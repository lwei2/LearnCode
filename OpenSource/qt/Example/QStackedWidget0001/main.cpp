
#include <QApplication>
#include "parentwidget.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    ParentWidget w;
    w.show();
    return app.exec();
}
