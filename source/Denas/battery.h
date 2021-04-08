#ifndef BATTERY_H
#define BATTERY_H

#include <QObject>

class battery : public QObject
{
    Q_OBJECT
public:
    explicit battery(QObject *parent = nullptr);

signals:

public slots:
};

#endif // BATTERY_H
