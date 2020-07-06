
#include <QApplication>
#include "parentdialog.h"
#include "subdialog1.h"
#include "subdialog2.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);
#if 0
    ParentDialog p;
    p.show();
#else
    subDialog1 s1;
    s1.show();
//    subDialog2 s2;
//    s2.show();
#endif
    return app.exec();
}
