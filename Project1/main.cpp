#include "mainwinindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWinindow w;
    w.show();
    return a.exec();
}
