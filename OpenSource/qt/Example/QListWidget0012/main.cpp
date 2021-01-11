
#include <QApplication>
#include "listwidget.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    ListWidget w;
    w.show();
    return app.exec();
}
