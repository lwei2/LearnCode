#ifndef BOARD_H
#define BOARD_H

#include <QWidget>
#include "Stone.h"

class Board : public QWidget
{
    Q_OBJECT
public:
    explicit Board(QWidget *parent = nullptr);


    int _r;

    Stone _s[32];

    QPoint center(int id);

    QPoint center(int row, int col);

    void drawStone(QPainter &painter, int id);

    void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // BOARD_H
