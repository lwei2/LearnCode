#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
    //ui(new Ui::MainWindow)
{
    //ui->setupUi(this);
    setWindowTitle(tr("Main Window"));
    openAction = new QAction(QIcon(":images/doc-open"),tr("&Open..."),this);
    openAction->setShortcuts(QKeySequence::Open);
    openAction->setStatusTip(tr("Open an existing file!"));
    connect(openAction,&QAction::triggered,this,&MainWindow::open);

    QMenu *file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);

    QToolBar *toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);
    statusBar();
}

MainWindow::~MainWindow()
{
    //delete ui;
}

void MainWindow::open()
{
    QMessageBox::information(this,tr("information"),tr("open"));
}
