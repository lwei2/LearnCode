#ifndef PARENTDIALOG_H
#define PARENTDIALOG_H

#include <QRect>
#include <QRectF>
#include <QDialog>
#include <QDebug>
#include <QBrush>
#include <QColor>
#include <QPainter>
#include <QPaintEvent>

class ParentDialog : public QDialog
{
    Q_OBJECT
public:
    ParentDialog(QWidget *parent = nullptr);
    ~ParentDialog();
protected:
    void paintEvent(QPaintEvent *event);

};

#endif // PARENTDIALOG_H
