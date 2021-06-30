
#include <QApplication>
#include <QMessageBox>
#include <QTemporaryDir>
#include <QDebug>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTemporaryDir tmpDir;


    qDebug()<<"1."<<QDir::tempPath();
    qDebug()<<"2."<<QDir::separator();
    qDebug()<<"3."<<QCoreApplication::applicationName();

    if(tmpDir.isValid())
    {

        const QString tempFile = tmpDir.path() + "/yourfile.xlsx";

        if (QFile::copy(":/file/yourfile.xlsx", tempFile))
        {
        // your file is now extracted to the filesystem
            QMessageBox::information(NULL, QStringLiteral("提示"), QStringLiteral("拷贝成功"),
                                     QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        }

    }

    return app.exec();
}
