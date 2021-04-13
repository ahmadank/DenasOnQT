#include "programs.h"

Programs::Programs()
{

    programsCollection.push_back("name1");
    programsCollection.push_back("name2");
    programsCollection.push_back("name3");
    programsCollection.push_back("name4");

    numOfPrograms = 4;
}


QString Programs::getProgram(int i){
    return programsCollection[i];
}

int Programs::getNumOfPrograms(){
    return numOfPrograms;
}
