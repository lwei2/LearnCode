
#include <QApplication>
#include <QTextEdit>
#include <QSplitter>

int main(int argc,  char **argv)
{
    QApplication app(argc, argv);
    QSplitter *pSplitter = new QSplitter(Qt::Horizontal);
    QTextEdit *pEdit1 = new QTextEdit/*(pSplitter)*/;
    pEdit1->setText(QObject::tr("Left Windows"));
    QTextEdit *pEdit2 = new QTextEdit;
    pEdit2->setText(QObject::tr("Right Windows"));

    pSplitter->addWidget(pEdit1);
    pSplitter->addWidget(pEdit2);
    pSplitter->setStretchFactor(0, 1);
    pSplitter->setStretchFactor(1, 4);
    pSplitter->setWindowTitle("Splitter demo");
    pSplitter->show();
    return app.exec();
}
