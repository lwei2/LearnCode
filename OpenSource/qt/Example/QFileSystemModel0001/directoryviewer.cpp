#include "directoryviewer.h"

DirectoryViewer::DirectoryViewer(QWidget *parent):QDialog(parent)
{
    this->setWindowTitle(QString("demo0001"));

    m_pModel = NULL;
    m_pModel = new QFileSystemModel(this);
    m_pModel->setReadOnly(false);
    m_pModel->setRootPath(QDir::currentPath());

    m_pTreeView = NULL;
    m_pTreeView = new QTreeView(this);
    m_pTreeView->setModel(m_pModel);

    //一般设置最后一列自适应宽度，让表头初始显示时占满行，效果比较好
    m_pTreeView->header()->setStretchLastSection(true);
    m_pTreeView->header()->setSortIndicator(0, Qt::AscendingOrder);
    m_pTreeView->header()->setSortIndicatorShown(true);
    //m_pTreeView->header()->setClickable(true);

    QModelIndex index = m_pModel->index(QDir::currentPath());
    m_pTreeView->expand(index);
    m_pTreeView->scrollTo(index);
    m_pTreeView->resizeColumnToContents(0);

    QPushButton *btnCreate = new QPushButton("Create Directory",this);
    QPushButton *btnRemove = new QPushButton("Remove", this);
    QHBoxLayout *pHBoxLayout = new QHBoxLayout;
    pHBoxLayout->addWidget(btnCreate);
    pHBoxLayout->addWidget(btnRemove);

    QVBoxLayout *pVBoxLayout = new QVBoxLayout;
    pVBoxLayout->addWidget(m_pTreeView);
    pVBoxLayout->addLayout(pHBoxLayout);

    this->setLayout(pVBoxLayout);

    connect(btnCreate, &QPushButton::clicked, this, &DirectoryViewer::createDirectory);
    connect(btnRemove, &QPushButton::clicked, this, &DirectoryViewer::reMove);
}

DirectoryViewer::~DirectoryViewer()
{

}

void DirectoryViewer::createDirectory()
{
    QModelIndex index = m_pTreeView->currentIndex();
    if(!index.isValid())
        return;
    QString dirName = QInputDialog::getText(this, tr("Create Directory"), tr("Directory Name"));
    if(!dirName.isEmpty())
    {
        if(!m_pModel->mkdir(index, dirName).isValid())
        {
            QMessageBox::information(this, tr("Create Directory"), tr("Failed to create the directory"));
        }
    }
}

void DirectoryViewer::reMove()
{
    QModelIndex index = m_pTreeView->currentIndex();
    if(!index.isValid())
        return;
    bool ok;
    if(m_pModel->fileInfo(index).isDir())
    {
        ok = m_pModel->rmdir(index);
    }
    else
    {
        ok = m_pModel->remove(index);
    }
    if(!ok)
    {
        QMessageBox::information(this, tr("Remove"), tr("Failed to remove %1").arg(m_pModel->fileName(index)));
    }
}
