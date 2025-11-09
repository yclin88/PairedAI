#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w1,w2;
    w1.resize(300,200);
    w2.resize(300,200);
    w1.move(100,100);
    w2.move(450,100);
    w1.show();
    w2.show();
    return a.exec();
}
