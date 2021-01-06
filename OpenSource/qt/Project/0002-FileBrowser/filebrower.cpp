#include "filebrower.h"

FileBrower::FileBrower(QWidget *parent, Qt::WindowFlags flag) : QWidget(parent)
{
    m_editCurPath = NULL;
    m_listWidget = NULL;
    initUi();
}

FileBrower::~FileBrower()
{

}

void FileBrower::initUi()
{
    QVBoxLayout mVboxLayout;
    m_editCurPath = new QLineEdit(this);
    m_editCurPath->resize(this->width()*80/100, 30);
    m_editCurPath->move(this->width()*5/100, this->height()*5/100);
    connect(m_editCurPath,SIGNAL(returnPressed()),this,SLOT(showCurrentDirFiles()));
    mVboxLayout.addWidget(m_editCurPath);

    m_listWidget = new QListWidget(this);
    m_listWidget->resize(this->width()*80/100, this->height()*80/100);
    m_listWidget->move(this->width()*5/100, this->height()*15/100);
    connect(m_listWidget,SIGNAL(itemDoubleClicked(QListWidgetItem*)),this,SLOT(showNextDirFiles(QListWidgetItem*)));
    mVboxLayout.addWidget(m_listWidget);
}

QIcon *FileBrower::getItemPropertyIcon(int type)
{
    QDir dir;
    QString path = dir.currentPath();
    switch (type)
    {
    case 1:
        return new QIcon(/*path + */":/res/folder-1.png");
        break;
    case 2:
        return new QIcon(/*path + */":/res/file-1.png");
        break;
    default:
        break;
    }
    return NULL;
}

void FileBrower::showFileInfoList(QFileInfoList pInfoList)
{
    m_listWidget->clear();
    for(int i = 0; i < pInfoList.size(); i++)
    {
        QFileInfo tmpFileInfo = pInfoList.at(i);
        QString pFileName = tmpFileInfo.fileName();
        QListWidgetItem *pItem = new QListWidgetItem(pFileName);
        if(tmpFileInfo.isDir())
        {
            pItem->setIcon(*getItemPropertyIcon(1));
        }
        else
        {
            pItem->setIcon(*getItemPropertyIcon(2));
        }
        m_listWidget->addItem(pItem);
    }
}

void FileBrower::showCurrentDirFiles()
{
    QDir curDir(m_editCurPath->text());
    QStringList fileList;
    fileList<<"*";
    QFileInfoList infoList = curDir.entryInfoList(fileList, QDir::AllEntries, QDir::DirsFirst);
    this->showFileInfoList(infoList);
}

void FileBrower::showNextDirFiles(QListWidgetItem* item)
{
    QDir dir;
    QString strName = item->text();
    dir.setPath(m_editCurPath->text());
    dir.cd(strName);
    m_editCurPath->setText(dir.absolutePath());
    showCurrentDirFiles();
}
