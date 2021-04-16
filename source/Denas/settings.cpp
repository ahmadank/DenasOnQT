#include "settings.h"

Settings::Settings(){
    settingsCollection.push_back("Clear Recordings History");
    settingsCollection.push_back("Sound");
    settingsCollection.push_back("Brightness");
    settingsCollection.push_back("Economy");
    settingsCollection.push_back("Alarm");
    settingsCollection.push_back("Clock");
    settingsCollection.push_back("Language");
    settingsCollection.push_back("Color");

    numOfOptions = settingsCollection.size();
}

QString Settings::getSettingOption(int i){
    return settingsCollection[i];
}

int Settings::getNumOfOptions(){
    return numOfOptions;
}
