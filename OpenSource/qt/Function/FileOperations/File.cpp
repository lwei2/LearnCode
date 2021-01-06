
#include "File.h"

File::File()
{
	
}

File::~File()
{
	
}

quint64 File::CalculateFolderSize1(const QString filePath)
{
    QDir dir(filePath);
    quint64 size = 0;

    /*获取文件列表  统计文件大小*/
    foreach(QFileInfo fileInfo, dir.entryInfoList(QDir::Files))
    {
		//计算文件大小
        size += fileInfo.size();
    }

    /*获取文件夹  并且过滤掉.和..文件夹 统计各个文件夹的文件大小 */
    foreach(QString subDir, dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot))
    {
		//若存在子目录，则递归调用dirFileSize()函数
        size += CalculateFolderSize1(filePath + QDir::separator() + subDir); //递归进行  统计所有子目录
    }

    return size;
}

quint64 File::CalculateFolderSize2(const QString filePath)
{
	quint64 result = 0;
    QFileInfo info(strPath);
    if(info.isFile())
    {
        result += info.size();
    }
    else if(info.isDir())
    {
        QDir dir(strPath);
        QFileInfoList fileList = dir.entryInfoList();
        for(int i = 0; i < fileList.count(); i++)
        {
            if(fileList[i].fileName() != "." && fileList[i].fileName() != "..")
            {
                result += calculateFolderSize(fileList[i].absoluteFilePath());
            }
        }
    }
    return result;
}