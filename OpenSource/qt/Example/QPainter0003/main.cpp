
#include <QApplication>
#include "mywidget.h"

int main(int argc, char  *argv[])
{
    QApplication app(argc,argv);
    myWidget w;
    w.show();
    return app.exec();
}
