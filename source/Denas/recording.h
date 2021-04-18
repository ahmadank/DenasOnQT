#ifndef RECORDING_H
#define RECORDING_H

#include <QString>
#include <QDateTime>

class Recording {
public:
    Recording(QString);
    ~Recording();
    QString getTherapy();
    QString getTime();

private:
    QString therapy;
    QString time;
    QDateTime qDateTime;
};

#endif // RECORDING_H
