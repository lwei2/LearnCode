#include "mainwindow.h"

mainWindow::mainWindow(QWidget *parent) : QMainWindow(parent)
{
    this->resize(150,150);
    qDebug()<<"x="<<this->x();
    qDebug()<<"y="<<this->x();
    qDebug()<<"x1="<<this->geometry().x();
    qDebug()<<"y1="<<this->geometry().y();
    qDebug()<<"width="<<this->geometry().width();
    qDebug()<<"height="<<this->geometry().height();
    qDebug()<<"width`="<<this->frameGeometry().width();
    qDebug()<<"height`="<<this->frameGeometry().height();
}
