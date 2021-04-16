#include "therapytimer.h"
#include <QtCore>
#include <QDebug>

TherapyTimer::TherapyTimer(){
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));

    timer->start(1000);
}

void TherapyTimer::MySlot(){
    //qDebug() << "TIMER Executed";
}

void TherapyTimer::waitInterval(int ms){
    QTime endTime = QTime::currentTime().addMSecs(ms);
    while(endTime >= QTime::currentTime()){
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}
