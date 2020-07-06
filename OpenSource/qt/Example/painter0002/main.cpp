
#include <QApplication>
#include "subdialog1.h"
int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    subDialog1 s1;
    s1.show();
    return app.exec();
}
