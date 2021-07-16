#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QLineF>
#include <QPaintEvent>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = nullptr);
    ~myWidget();

protected:
    void paintEvent(QPaintEvent *event);

signals:

};

#endif // MYWIDGET_H
