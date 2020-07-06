#ifndef PARENTWIDGET_H
#define PARENTWIDGET_H

#include <QStackedWidget>
#include <QDialog>

class ParentWidget : public QDialog
{
    Q_OBJECT
public:
    ParentWidget(QWidget *parent = nullptr);
    ~ParentWidget();
private:
    QStackedWidget *m_pStackedWidget;
private slots:
    void switchPage();
};

#endif // PARENTWIDGET_H
