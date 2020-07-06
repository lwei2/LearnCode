#ifndef SUBDIALOG1_H
#define SUBDIALOG1_H

#include "parentdialog.h"
#include <QRect>
#include <QRectF>
#include <QDialog>
#include <QDebug>
#include <QBrush>
#include <QColor>
#include <QPainter>
#include <QPaintEvent>
#include <QStringLiteral>
#include "subdialog2.h"

class subDialog1 : public ParentDialog
{
    Q_OBJECT
public:
    subDialog1(QWidget *parent = nullptr);
    ~subDialog1();
private:
    subDialog1 *s1;
    subDialog2 *s2;
protected:
    void paintEvent(QPaintEvent *event);
private slots:
    void showsubDialog2();
};

#endif // SUBDIALOG1_H
