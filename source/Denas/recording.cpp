#include "recording.h"

Recording::Recording(QString t1) {
    therapy = t1;
    time = qDateTime.currentDateTime().toString();
}

QString Recording::getTherapy() {
    return therapy;
}

QString Recording::getTime() {
    return time;
}
