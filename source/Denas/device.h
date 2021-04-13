#ifndef DEVICE_H
#define DEVICE_H


class Device
{
public:
    Device();
    bool getPowerStatus();
    void setPowerStatus(bool);
private:
    bool powerOn;
};

#endif // DEVICE_H
