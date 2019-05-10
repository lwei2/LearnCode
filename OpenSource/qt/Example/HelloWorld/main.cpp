#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
   // w.show();
#if 0
    QLabel label("Hello World!");
    label.show();
#else 
    QLabel *label = new QLabel(&w);
    label->setText("Hello World!hi, Qt!");
    label->resize(200,20);
    label->move(120,120);
    w.show();
#endif
    return a.exec();
}
