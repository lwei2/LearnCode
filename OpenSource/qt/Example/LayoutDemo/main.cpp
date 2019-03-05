#include "mainwindow.h"
#include <QApplication>
#include <QSpinBox>
#include <QSlider>
#include <QHBoxLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Enter your age");
    QSpinBox *spinbox = new QSpinBox(&w);
    spinbox->setRange(0,130);
    QSlider *slider= new QSlider(Qt::Horizontal, &w);
    slider->setRange(0,130);

    QObject::connect(slider,&QSlider::valueChanged,spinbox,&QSpinBox::setValue);
    void (QSpinBox::*spinBoxSignal)(int) = &QSpinBox::valueChanged;
    QObject::connect(spinbox,spinBoxSignal,slider,&QSlider::setValue);

    QHBoxLayout *layout = new QHBoxLayout();
    layout->addWidget(spinbox);
    layout->addWidget(slider);
    w.setLayout(layout);
    w.show();

    return a.exec();
}
