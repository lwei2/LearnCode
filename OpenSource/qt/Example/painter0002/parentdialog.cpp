#include "parentdialog.h"

ParentDialog::ParentDialog(QWidget *parent):QDialog(parent)
{

}

ParentDialog::~ParentDialog()
{

}

void ParentDialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QFont font1("宋体",16, QFont::Normal);
    painter.setFont(font1);
    painter.setPen(Qt::green);
    painter.setClipRect(0,0,258,125);
    painter.begin(this);
//    painter.translate(0,0);
//    painter.drawText(58,25, QString("朗科安全闪存盘"));
//    painter.drawText(58,60, QString("欢迎使用朗科安全闪存盘"));
    painter.end();
    return QDialog::paintEvent(event);
}
