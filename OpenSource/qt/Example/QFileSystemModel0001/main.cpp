
#include <QApplication>
#include "directoryviewer.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    DirectoryViewer w;
    w.show();
    return app.exec();
}
