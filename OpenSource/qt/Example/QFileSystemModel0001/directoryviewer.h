#ifndef DIRECTORYVIEWER_H
#define DIRECTORYVIEWER_H

#include <QDialog>
#include <QTreeView>
#include <QDir>
#include <QInputDialog>
#include <QModelIndex>
#include <QHeaderView>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QFileSystemModel>

class DirectoryViewer : public QDialog
{
    Q_OBJECT
public:
    DirectoryViewer(QWidget *parent = nullptr);
    ~DirectoryViewer();

private slots:
    void createDirectory();
    void reMove();
private:
    QFileSystemModel *m_pModel;
    QTreeView        *m_pTreeView;

};

#endif // DIRECTORYVIEWER_H
