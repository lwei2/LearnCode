#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMouseEvent>
#include <QPen>
#include <QPainter>

class Dialog : public QDialog
{
    Q_OBJECT
public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

public:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void keyPressEvent(QKeyEvent *);
private:
    QPoint m_curPoint;
};

#endif // DIALOG_H
