#include "homemenu.h"

HomeMenu::HomeMenu(){
    homeMenuCollection.push_back("Programs");
    homeMenuCollection.push_back("Frequency");
    homeMenuCollection.push_back("Recordings");
    homeMenuCollection.push_back("Settings");
    numOfItems = homeMenuCollection.size();
}

QString HomeMenu::getMenuItem(int i){
    return homeMenuCollection[i];
}

int HomeMenu::getNumOfItems(){
    return numOfItems;
}
