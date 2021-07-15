#include "simpleexamplewidget.h"

SimpleExampleWidget::SimpleExampleWidget(QWidget *parent) : QWidget(parent)
{
    this->resize(500, 500);
}

SimpleExampleWidget::~SimpleExampleWidget()
{

}

void SimpleExampleWidget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.setFont(QFont("Arial", 30));
    painter.drawText(rect(), Qt::AlignCenter, "Qt");
}
