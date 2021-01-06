#ifndef FILEBROWER_H
#define FILEBROWER_H

#include <QWidget>
#include <QDir>
#include <QIcon>
#include <QDebug>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QListWidget>
#include <QFileInfoList>

class FileBrower : public QWidget
{
    Q_OBJECT
public:
    explicit FileBrower(QWidget *parent = nullptr, Qt::WindowFlags flag = 0);
    ~FileBrower();

public:
    void initUi();
    void showFileInfoList(QFileInfoList pInfoList);
    QIcon *getItemPropertyIcon(int type);
private:
    QLineEdit   *m_editCurPath;
    QListWidget *m_listWidget;

private slots:
    void showCurrentDirFiles();
    void showNextDirFiles(QListWidgetItem*);
signals:

};

#endif // FILEBROWER_H
