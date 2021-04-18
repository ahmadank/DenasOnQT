#ifndef PROGRAMS_H
#define PROGRAMS_H
#include <vector>
#include <QString>

using namespace std;


class Programs {

public:
    Programs();
    ~Programs();
    QString getProgram(int);
    int getNumOfPrograms();

private:
    vector<QString> programsCollection;
    int numOfPrograms;
};

#endif // PROGRAMS_H
