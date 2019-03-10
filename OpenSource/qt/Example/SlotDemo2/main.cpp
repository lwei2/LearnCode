#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    QPushButton button("quit");
    QObject::connect(&button,&QPushButton::clicked,[](bool){
        qDebug()<<"You clicked me!";
    });
    button.show();
    return a.exec();
}
