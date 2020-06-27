
#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc,char **argv)
{
    QApplication app(argc, argv);
    QDialog w;
    QLabel label(&w);
    label.move(120,120);
    label.setText("Hello World, Qt!");    
    w.show();
    return app.exec();
}
