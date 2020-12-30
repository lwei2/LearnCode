
#include <QApplication>
#include "common.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Producter producter;
    Consumer consumer;
    producter.start();
    consumer.start();
    producter.wait();
    consumer.wait();
    return app.exec();
}
