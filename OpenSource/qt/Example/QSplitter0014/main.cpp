
#include <QApplication>
#include <QSplitter>
#include <QDir>
#include <QFileInfoList>
#include <QTextEdit>
#include <QTreeWidgetItem>

void LoadFiles(QString path, QTreeWidget *treewidget, QTreeWidgetItem *item)
{
    QDir dir(path);
    if (!dir.exists()) return;

    dir.setFilter(QDir::Dirs | QDir::Files | QDir::NoSymLinks);
    QFileInfoList list = dir.entryInfoList();
    int size = list.size();
    for (int i = 0; i < size; i++) {
        QFileInfo info = list.at(i);
        if (info.fileName() == "." || info.fileName() == "..") continue;

        if (info.isDir()) {
            QTreeWidgetItem *fileItem = new QTreeWidgetItem(QStringList() << info.fileName(), 0);  //0表示目录
            if (treewidget == NULL) item->addChild(fileItem);
            else treewidget->addTopLevelItem(fileItem);
            LoadFiles(info.filePath(), NULL, fileItem);
        } else {
            QTreeWidgetItem *fileItem = new QTreeWidgetItem(QStringList() << info.fileName(), 1);   //1表示是文件
            if (treewidget == NULL) item->addChild(fileItem);
            else treewidget->addTopLevelItem(fileItem);
        }
    }
}

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    QSplitter *pSplitter = new QSplitter(Qt::Horizontal);
    QTextEdit *pedit1 = new QTextEdit;
    pedit1->setText(QObject::tr("left"));
    pSplitter->addWidget(pedit1);
    pSplitter->setStretchFactor(0, 1);

    QSplitter *pSlitter1 = new QSplitter(Qt::Vertical, pSplitter);
    QTextEdit *pedit2 = new QTextEdit;
    pedit2->setText(QObject::tr("rigth top"));
    pSlitter1->addWidget(pedit2);
    pSlitter1->setStretchFactor(0, 1);

    QTextEdit *pedit3 = new QTextEdit;
    pedit3->setText(QObject::tr("rigth bottom"));
    pSlitter1->addWidget(pedit3);
    pSlitter1->setStretchFactor(0, 4);

    pSplitter->addWidget(pSlitter1);
    pSplitter->setStretchFactor(1, 4);

    pSplitter->show();
    return app.exec();
}
