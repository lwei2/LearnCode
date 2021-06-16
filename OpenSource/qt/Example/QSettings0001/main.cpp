
#include <QApplication>
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <QSettings>
#include <QTextCodec>
#include <QDialog>
#include <QDebug>

quint32 WriteIniFile(QString &aFilePath, QString &aSection,QString &aKey, QVariant &aValue)
{
    Q_ASSERT(aFilePath != NULL && aSection != NULL && aKey != NULL);
    QSettings *pWriteIni = new QSettings(aFilePath, QSettings::IniFormat);
    if(pWriteIni != NULL)
    {
        pWriteIni->beginGroup(aSection);
        const QString strkey = aKey;
        pWriteIni->setValue(strkey, aValue);
        pWriteIni->endGroup();
    }
    delete pWriteIni;
    return 0;
}

QVariant ReadIniFile(QString &aFilePath, QString &aSection, QString &aKey, QVariant &aValue)
{
    Q_ASSERT(aFilePath != NULL && aSection != NULL && aKey != NULL);

    QSettings *pReadIni = new QSettings(aFilePath, QSettings::IniFormat);
    if(pReadIni != NULL)
    {
        QString strKey = QString("%1/%2").arg(aSection).arg(aKey);
        aValue = pReadIni->value(strKey);
    }
    delete pReadIni;
    return aValue;
}

int main(int argc, char *argv[])
{
    //QApplication app(argc, argv);
    Q_UNUSED(argc);
    Q_UNUSED(argv);

    QString path = "M:\\demo.ini";
    fprintf(stderr,"ini path=%s\n", path.toStdString().c_str());
    QSettings writeSettings(path, QSettings::IniFormat);
    writeSettings.setIniCodec(QTextCodec::codecForName("utf-8")); //在此添加设置，即可读写ini文件中的中文

    //写数据
    writeSettings.setValue("/setting/value1", 1);
    writeSettings.setValue("/setting/value2", 2);
    writeSettings.beginGroup("setting"); //切换到setting组之下
    writeSettings.setValue("value3", 3);
    writeSettings.setValue("value4", 4);
    writeSettings.setValue("value5", 5);
    writeSettings.setValue("value6", 6);
    writeSettings.endGroup(); //关闭分组定位,注意如果需切换分组，必须保证关闭。不然切换无效

    QString aSection = "setting";
    QString aKey = "value7";
    QVariant aValue = 7;
    WriteIniFile(path, aSection, aKey, aValue);

    //读数据
    QSettings readSettings(path, QSettings::IniFormat);
    int value1 = readSettings.value("/setting/value1").toInt();
    int value2 = readSettings.value("/setting/value2").toInt();
    int value3 = readSettings.value("/setting/value3").toInt();
    int value4 = readSettings.value("/setting/value4").toInt();
    int value5 = readSettings.value("/setting/value5").toInt();
    int value6 = readSettings.value("/setting/value6").toInt();

    QVariant aValue7;
    ReadIniFile(path, aSection, aKey, aValue7);
    int value7 = aValue7.toInt();
    fprintf(stderr,"value1=%d,value2=%d,value3=%d,value4=%d,value5=%d,value6=%d,value7=%d\n",
            value1, value2, value3, value4, value5, value6, value7);

    return 0;//app.exec();
}
