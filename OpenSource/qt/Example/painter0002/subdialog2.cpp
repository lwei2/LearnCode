#include "subdialog2.h"

subDialog2::subDialog2(QWidget *parent):ParentDialog(parent)
{

}

subDialog2::~subDialog2()
{

}

void subDialog2::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QFont font1("ËÎÌו",16, QFont::Normal);
    painter.setFont(font1);
    painter.setPen(Qt::black);
    painter.setClipRect(0,0,258,125);
    painter.begin(this);
    painter.translate(0,0);
    painter.drawText(58,25, QString("What are you...?"));
    painter.drawText(58,60, QString("Why?"));
    painter.end();
    return ParentDialog::paintEvent(event);
}
