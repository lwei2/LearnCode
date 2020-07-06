#include "subdialog2.h"

subDialog2::subDialog2(QWidget *parent):QDialog(parent)
{

}

subDialog2::~subDialog2()
{

}

void subDialog2::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect f1(0,0,100,100);
    QRect f2(100, 0, 100, 100);
    QRect f3(0,100,100,100);
    QRect f4(100,100,100,100);

    QBrush other(QColor(0,0,0));
    painter.setBrush(other);
    painter.setClipRect(f1, Qt::NoClip);
    painter.setClipRect(f4, Qt::NoClip);
    painter.drawEllipse(QRect(0,0,200,200));
    return QDialog::paintEvent(event);
}
