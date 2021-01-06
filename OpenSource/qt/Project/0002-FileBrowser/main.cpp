
#include <QApplication>
#include "filebrower.h"


int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    FileBrower brower;
    brower.show();
    return app.exec();
}
