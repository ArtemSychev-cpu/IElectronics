#pragma once
#include "Portable.h"
#include "Appliances.h"
class Player final : public Portable, Appliances
{
protected:
    int _totalTracks;
public:

    Player(int totalTracks, int batteryLife);
    void ShowSpec() override;
};

