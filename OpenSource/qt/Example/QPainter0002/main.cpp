
#include <QApplication>
#include "simpleexamplewidget.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    SimpleExampleWidget w;
    w.show();
    return app.exec();
}
