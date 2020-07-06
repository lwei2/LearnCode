#ifndef SUBDIALOG2_H
#define SUBDIALOG2_H

#include "parentdialog.h"
#include <QRect>
#include <QRectF>
#include <QDialog>
#include <QDebug>
#include <QBrush>
#include <QColor>
#include <QPainter>
#include <QPaintEvent>

class subDialog2 : public  ParentDialog
{
    Q_OBJECT
public:
    subDialog2(QWidget *parent = nullptr);
    ~subDialog2();
protected:
    void paintEvent(QPaintEvent *event);
};

#endif // SUBDIALOG2_H
