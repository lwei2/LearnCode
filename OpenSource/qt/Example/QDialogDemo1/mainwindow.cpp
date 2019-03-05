#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
    //ui(new Ui::MainWindow)
{
    setWindowTitle("Main Windows");
    //explicit QAction(const QIcon &icon, const QString &text, QObject *parent = nullptr);
    openAction = new QAction(QIcon("/:images/doc-open"),tr("&Open..."),this);
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open the file is existing!"));
    connect(openAction, &QAction::triggered, this, &MainWindow::open);

    //QMenu *addMenu(const QString &title);
    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);

    //ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    //delete ui;
}

void MainWindow::open()
{
#if 1
    QDialog dialog(this);
    dialog.setWindowTitle(tr("Hello,dialog!"));
    //dialog.exec();
    //qDebug()<<dialog.result();
    if(dialog.exec() == QDialog::Accepted)
    {
        qDebug()<<"Accepted!";
    }
    else
    {
        qDebug()<<"Rejected!";
    }
#else
    QDialog *dialog = new QDialog();
    dialog->setAttribute(Qt::WA_DeleteOnClose);
    dialog->setWindowTitle(tr("Hello,dialog!"));
    dialog->exec();
#endif
    //dialog.show();
}
