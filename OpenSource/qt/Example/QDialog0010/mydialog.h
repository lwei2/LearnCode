#ifndef MYDIALOG_H
#define MYDIALOG_H

#include <QDialog>
#include <QBrush>
#include <QPainter>
#include <QPaintEvent>
#include <QPainterPath>

class myDialog : public QDialog
{
    Q_OBJECT
public:
    myDialog(QDialog *parent = nullptr);
    ~myDialog();


private:
    void    initUiStyle1();
    void    initUiStyle2();

protected:
    void    paintEvent(QPaintEvent *event);

};

#endif // MYDIALOG_H
