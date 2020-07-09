#include <QApplication>
#include <windows.h>
#include <QVector>
#include <QDebug>

struct DriveInfo
{
    QString sDriName;
    quint64 uiTotal;
    quint64 uiFree;
    quint64 uiFree2Caller;

    DriveInfo()
    {
        sDriName = "";
        uiTotal = 0;
        uiFree = 0;
        uiFree2Caller = 0;
    }
};

// 获取所有本地磁盘的使用详情
QVector<DriveInfo> get_local_drive_info()
{
    QVector<DriveInfo> vecDriInfo;

    DWORD diskCntArr = GetLogicalDrives();
    int diskCnt = 0;
    while (diskCntArr)
    {
        if (diskCntArr & 1)
        {
            diskCnt++;
        }
        diskCntArr = diskCntArr >> 1;
    }

    int DSLength = GetLogicalDriveStrings(0, NULL);
    TCHAR* DStr = new TCHAR[DSLength];
    GetLogicalDriveStrings(DSLength, (LPTSTR)DStr);

    int dri_type;
    BOOL fResult;
    quint64 iFree2Caller = 0;
    quint64 iTotalBytes = 0;
    quint64 iFreeBytes = 0;
    TCHAR *lpDriveStr = DStr;

    for (int i = 0; i < diskCnt; ++i)
    {
        dri_type = GetDriveType(lpDriveStr);
        if (dri_type == DRIVE_FIXED)
        {
            fResult = GetDiskFreeSpaceEx(lpDriveStr, (PULARGE_INTEGER)&iFree2Caller, (PULARGE_INTEGER)&iTotalBytes, (PULARGE_INTEGER)&iFreeBytes);
            if (fResult)
            {
                DriveInfo info;
                info.sDriName = QString::fromStdWString(lpDriveStr);
                info.uiFree2Caller = iFree2Caller;
                info.uiTotal = iTotalBytes;
                info.uiFree = iFreeBytes;

                vecDriInfo << info;
            }
            else
            {
                // 打印日志 megloglib
                qDebug() << "读取硬盘{0}使用情况时错误";
            }

            lpDriveStr += 4;
        }
        else
        {
            lpDriveStr += 4;
        }
    }

    delete[] DStr;
    DStr = NULL;

    return vecDriInfo;
}


int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    QVector<DriveInfo> ret = get_local_drive_info();
    for(int i = 0; i < ret.size(); i++)
    {
        qInfo()<<"sDriName:"<<ret[i].sDriName;
        qInfo()<<"uiFree2Caller:"<<ret[i].uiFree2Caller;
        qInfo()<<"uiTotal："<<ret[i].uiTotal/1024/1024/1024;
        qInfo()<<"uiFree:"<<ret[i].uiFree;
    }
    return app.exec();
}
