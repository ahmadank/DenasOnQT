#ifndef SETTINGS_H
#define SETTINGS_H
#include <vector>
#include <QString>

using namespace std;

class Settings
{
public:
    Settings();
    QString getSettingOption(int);
    int getNumOfgOptions();
private:
    vector<QString> settingsCollection;
    int numOfOptions;
};

#endif // SETTINGS_H
