#include "dialog.h"

Dialog::Dialog(QWidget *parent):QDialog(parent)
{
    this->setWindowFlags(Qt::FramelessWindowHint);

    this->setAttribute(Qt::WA_TranslucentBackground, true);
}

Dialog::~Dialog()
{

}

void Dialog::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        m_curPoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
    QDialog::mousePressEvent(event);
}

void Dialog::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() & Qt::LeftButton)
    {
        move(event->globalPos() - m_curPoint);
        event->accept();
    }
    QDialog::mouseMoveEvent(event);
}

void Dialog::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing, true);
    painter.setPen(QPen(Qt::black, 2));
    painter.setBrush(Qt::black);
    QRect rect(10,10,200,260);
    painter.drawEllipse(rect);
//    QDialog::paintEvent(event);
}

void Dialog::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Escape)
        close();
}
