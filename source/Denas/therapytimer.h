#ifndef THERAPYTIMER_H
#define THERAPYTIMER_H

#include <QtCore>

class TherapyTimer : public QObject{
    Q_OBJECT

  public:
    TherapyTimer();
    void waitInterval(int);

    QTimer *timer;

  public slots:
    void MySlot();
};

#endif // THERAPYTIMER_H
