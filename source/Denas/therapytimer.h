#ifndef THERAPYTIMER_H
#define THERAPYTIMER_H

#include <QtCore>


class therapyTimer : public QObject
{
    Q_OBJECT

  public:
    therapyTimer();

    QTimer *timer;

  public slots:
    void MySlot();
};

#endif // THERAPYTIMER_H
