#ifndef LISTWIDGET_H
#define LISTWIDGET_H

#include <QWidget>
#include <QObject>
#include <QMenu>
#include <QDir>
#include <QAction>
#include <QList>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListView>
#include <QFileInfoList>
#include <QStandardItemModel>

class ListWidget : public QWidget
{
    Q_OBJECT
public:
    ListWidget(QWidget *parent = nullptr);
    ~ListWidget();

    void setDir(const QString &dirPath);

    void clear();

private:
    void initColtrol();

    void initAction();

    void resetModel(const QFileInfoList &infos);

    void resetView();

    QFileInfoList getImageFileInfoList(const QString &dirPath) const;

    void addActionFlow();
    void addActionWrapping();
    void addActionMoveMent();
    void addActionResizeMode();
    void addActionViewMode();

    void setActions(const QList<QAction*>& actions);

private:
    QStandardItemModel *model;
    QListView *view;
    QMenu *menu;
signals:

};

#endif // LISTWIDGET_H
