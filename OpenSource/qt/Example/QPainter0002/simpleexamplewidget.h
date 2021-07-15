#ifndef SIMPLEEXAMPLEWIDGET_H
#define SIMPLEEXAMPLEWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>

class SimpleExampleWidget : public QWidget
{
    Q_OBJECT
public:
    explicit SimpleExampleWidget(QWidget *parent = nullptr);
    ~SimpleExampleWidget();

protected:
    void    paintEvent(QPaintEvent *event);

signals:

};

#endif // SIMPLEEXAMPLEWIDGET_H
