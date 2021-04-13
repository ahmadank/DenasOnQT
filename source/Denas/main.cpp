#include "mainwindow.h"
#include <QApplication>
#include "therapytimer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    TherapyTimer mTimer;

    return a.exec();
}
