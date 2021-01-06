QT  += core gui
greaterThan(QT_MAJOR_VERSION, 4) : QT   +=  widgets


TARGET = FileBrowser
TEMPLATE = app

SOURCES += \
    filebrower.cpp \
    main.cpp

HEADERS += \
    filebrower.h

QT += widgets

RESOURCES += \
    resources.qrc

