#include "mydialog.h"

myDialog::myDialog(QDialog *parent)
    :QDialog(parent)
{
    //initUiStyle1();
}

myDialog::~myDialog()
{

}

void myDialog::initUiStyle1()
{
    this->resize(500, 500);
    this->setStyleSheet("QDialog{background-color:gray;border: 1px solid; border-top-left-radius:15px;border-top-right-radius:5px;}");
}

void myDialog::initUiStyle2()
{
    this->resize(500,500);
}

void myDialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  // 反锯齿;
    painter.setBrush(QBrush(Qt::gray));
    painter.setPen(Qt::transparent);
    QRect rect = this->rect();
    rect.setWidth(rect.width() - 1);
    rect.setHeight(rect.height() - 1);
    painter.drawRoundedRect(rect, 15, 15);
//    //也可用QPainterPath 绘制代替 painter.drawRoundedRect(rect, 15, 15);
//    {
//        QPainterPath painterPath;
//        painterPath.addRoundedRect(rect, 15, 15);
//        p.drawPath(painterPath);
//    }
    QWidget::paintEvent(event);
}
