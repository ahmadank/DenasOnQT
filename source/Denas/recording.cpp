#include "recording.h"

Recording::Recording(QString t1, QString t2) {
    therapy = t1;
    time = t2;
}

QString Recording::getTherapy() {
    return therapy;
}

QString Recording::getTime() {
    return time;
}
