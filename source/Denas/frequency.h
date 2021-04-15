#ifndef FREQUENCY_H
#define FREQUENCY_H

#include <vector>
#include <QString>

using namespace std;

class Frequency
{
public:
    Frequency();
    QString getFrequency(int);
    int getNumOfFrequencies();
private:
    vector<QString> frequencyCollection;
    int numOfFrequencies;

};

#endif // FREQUENCY_H
