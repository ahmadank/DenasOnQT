#include "programs.h"

Programs::Programs(){
    programsCollection.push_back("Pain");
    programsCollection.push_back("Throat");
    programsCollection.push_back("Head");
    programsCollection.push_back("Bloating");

    numOfPrograms = programsCollection.size();
}
Programs::~Programs(){}

QString Programs::getProgram(int i){
    return programsCollection[i];
}

int Programs::getNumOfPrograms(){
    return programsCollection.size();
}
