#ifndef RECORDING_H
#define RECORDING_H

#include <QString>

class Recording {
public:
    Recording(QString, QString);
    QString getTherapy();
    QString getTime();

private:
    QString therapy;
    QString time;
};

#endif // RECORDING_H
