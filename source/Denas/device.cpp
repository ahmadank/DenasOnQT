#include "device.h"

Device::Device()
{
   powerOn = false;
}

bool Device::getPowerStatus(){
    return powerOn;
}

void Device::setPowerStatus(bool status){
    powerOn = status;
}

int Device::getMenuLocation(){
    return menuLocation;
}

void Device::setMenuLocation(int location){
    menuLocation = location;
}
void Device::setOption(int location){
    option = location;
}

int Device::getOption(){
    return option;
}

int Device::getMenuScreen(){
    return menuScreen;
}

void Device::setMenuScreen(int screen){
    menuScreen = screen;
}

int Device::getNestedMenu(){
    return nestedMenu;
}

void Device::setNestedMenu(int menu){
    nestedMenu = menu;
}

