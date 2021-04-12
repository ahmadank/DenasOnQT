#include "therapytimer.h"
#include <QtCore>
#include <QDebug>

therapyTimer::therapyTimer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));

    timer->start(1000);

}

void therapyTimer::MySlot(){
    qDebug() << "TIMER Executed";
}
