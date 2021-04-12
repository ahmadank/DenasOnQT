#include "mainwindow.h"
#include <QApplication>
#include "therapytimer.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    therapyTimer mTimer;

    return a.exec();
}
