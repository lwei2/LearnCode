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
    QRectF rectangle(10.0, 20.0, 80.0, 60.0);
    int startAngle = 30*16;
    int spanAngle = 120*16;
    QPainter painter(this);
    painter.drawArc(rectangle, startAngle, spanAngle);
}
