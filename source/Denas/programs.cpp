#include "programs.h"

Programs::Programs()
{

    programsCollection.push_back("Programs");
    programsCollection.push_back("Frequency");
    programsCollection.push_back("Recordings");
    programsCollection.push_back("Settings");

    numOfPrograms = programsCollection.size();
}


QString Programs::getProgram(int i){
    return programsCollection[i];
}

int Programs::getNumOfPrograms(){
    return numOfPrograms;
}
