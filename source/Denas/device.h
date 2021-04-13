#ifndef DEVICE_H
#define DEVICE_H

class Device{

public:
    Device();
    bool getPowerStatus();
    void setPowerStatus(bool);
    int getMenuLocation();
    void setMenuLocation(int);
    int getMenuScreen();
    void setMenuScreen(int);
    int getNestedMenu();
    void setNestedMenu(int);
    void setOption(int);
    int getOption();

private:
    bool powerOn;
    int menuLocation = 0;
    int menuScreen = 0;
    int nestedMenu = 0;
    int option = 0;
};

#endif // DEVICE_H
