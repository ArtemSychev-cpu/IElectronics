#pragma once
#include"IElectronics.h"

class Appliances :virtual public IElectronics
{
protected:
    int _weight;
    string _color;
public:
    Appliances() = default;
    Appliances(int weight, string color);
    void ShowSpec() override;
   virtual ~Appliances() = default;
};

