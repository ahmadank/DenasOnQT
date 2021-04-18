#include "frequency.h"

Frequency::Frequency(){
    frequencyCollection.push_back("10Hz");
    frequencyCollection.push_back("30Hz");
    frequencyCollection.push_back("75Hz");
    frequencyCollection.push_back("125Hz");

    numOfFrequencies = frequencyCollection.size();
}

Frequency::~Frequency(){}

QString Frequency::getFrequency(int i){
    return frequencyCollection[i];
}

int Frequency::getNumOfFrequencies(){
    return numOfFrequencies;
}
