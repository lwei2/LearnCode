#include "parentdialog.h"

ParentDialog::ParentDialog(QWidget *parent):QDialog(parent)
{

}
ParentDialog::~ParentDialog()
{

}


void ParentDialog::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QRect f1(0,0,100,100);
    QRect f2(100, 0, 100, 100);
    QRect f3(0,100,100,100);
    QRect f4(100,100,100,100);

    QBrush other(QColor(0,0,0));
    painter.setBrush(other);
    painter.setClipRect(f1, Qt::IntersectClip);
    painter.setClipRect(f4, Qt::IntersectClip);
    painter.drawEllipse(QRect(0,0,200,200));
//    return ParetDialog::paintEvent(event);
}
