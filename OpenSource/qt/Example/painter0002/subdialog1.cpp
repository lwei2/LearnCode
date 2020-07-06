#include "subdialog1.h"
#include <QPushButton>


subDialog1::subDialog1(QWidget *parent):ParentDialog(parent)
{
    QPushButton *btnNext = new QPushButton(this);
    btnNext->setText(tr("Next"));
    btnNext->resize(100,100);
    btnNext->setGeometry(500,500,50,50);
    connect(btnNext, &QPushButton::clicked, this, &subDialog1::showsubDialog2);
}
subDialog1::~subDialog1()
{

}

void subDialog1::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QFont font1("ËÎÌו",16, QFont::Normal);
    painter.setFont(font1);
    painter.setPen(Qt::red);
    painter.setClipRect(0,0,258,125);
    painter.begin(this);
    painter.translate(0,0);
    painter.drawText(58,25, QString("Hello,gai!"));
    painter.drawText(58,60, QString("Welcome Qt!"));
    painter.end();
    return ParentDialog::paintEvent(event);
}

void subDialog1::showsubDialog2()
{
    s2 = new subDialog2;
    s2->show();
}
