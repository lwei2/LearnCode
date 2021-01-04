
#include <QApplication>
#include <QTextCodec>
#include "logindlg.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    LoginDlg w;
    w.show();
    return app.exec();
}
