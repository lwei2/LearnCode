
#include <QApplication>
#include "progressbar.h"

int main(int argc,  char **argv)
{
    QApplication app(argc, argv);
    ProgressBar p;
    p.show();
    return app.exec();
}
