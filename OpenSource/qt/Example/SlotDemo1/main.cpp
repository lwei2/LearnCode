#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QPushButton button("Quit");
    QObject::connect(&button,&QPushButton::clicked,&QApplication::quit);
    button.show();
    return a.exec();
}
