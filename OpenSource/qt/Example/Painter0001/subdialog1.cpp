#include "subdialog1.h"
#include <QPushButton>
#include <QString>
#include <QStringLiteral>
#include "subdialog2.h"

subDialog1::subDialog1(QWidget *parent):ParentDialog(parent)
{
    QPushButton *btnNext = new QPushButton(this);
    btnNext->setText(tr("Next"));
    btnNext->resize(200,200);
    btnNext->setGeometry(300,300,200,200);
    connect(btnNext, &QPushButton::clicked, this, &subDialog1::showsubDialog2);
}

subDialog1::~subDialog1()
{

}

void subDialog1::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect f1(0,0,100,100);
    QRect f2(100, 0, 100, 100);
    QRect f3(0,100,100,100);
    QRect f4(100,100,100,100);

    QBrush other(QColor(0,0,0));
    painter.setBrush(other);
    painter.setClipRect(f1, Qt::ReplaceClip);
    painter.setClipRect(f4, Qt::ReplaceClip);
    painter.drawEllipse(QRect(0,0,200,200));
    return ParentDialog::paintEvent(event);
}

void subDialog1::showsubDialog2()
{
    subDialog2 s;
    s.show();
    s.exec();
}
