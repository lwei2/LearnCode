#include "mywidget.h"

myWidget::myWidget(QWidget *parent) : QWidget(parent)
{
    this->resize(500, 500);
}

myWidget::~myWidget()
{

}

void myWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter p;
    p.begin(this);
    QLineF line(10.0, 80.0, 90.0, 20.0);
    p.drawLine(line);
    p.end();
}
