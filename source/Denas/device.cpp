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
