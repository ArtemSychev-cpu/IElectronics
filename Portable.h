#pragma once
#include"IElectronics.h"

class Portable :virtual public IElectronics
{
protected:
    int _batteryLife;
public:
    Portable() = default;
    Portable(int batteryLife);
    void ShowSpec() override;
    virtual ~Portable() = default;
};

