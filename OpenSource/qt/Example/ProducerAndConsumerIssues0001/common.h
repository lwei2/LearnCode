#ifndef COMMON_H
#define COMMON_H

#include <QMutex>
#include <QDebug>
#include <QObject>
#include <QThread>
#include <QWaitCondition>

QMutex mMutex;
int nUseSpace = 0;
const int nBufSize = 1;
const int nDataSize = 100;

QWaitCondition bufferIsNotFull;
QWaitCondition bufferIsNotEmpty;

class Producter : public QThread
{
protected:
    void run()
    {
        for(int i = 0; i < nDataSize; i++)
        {
            mMutex.lock();
            while(nBufSize == nUseSpace)
            {
                bufferIsNotFull.wait(&mMutex);
            }
            qDebug()<<"Product "<<i;
            ++nUseSpace;
            bufferIsNotEmpty.wakeAll();
            mMutex.unlock();
        }

    }
};

class Consumer : public QThread
{
protected:
    void run()
    {
        for(int i = 0; i < nDataSize; i++)
        {
            mMutex.lock();
            while(nUseSpace == 0)
            {
                bufferIsNotEmpty.wait(&mMutex);
            }
            qDebug()<<"Consumer "<<i;
            --nUseSpace;
            bufferIsNotFull.wakeAll();
            mMutex.unlock();
        }
    }
};


#endif // COMMON_H
