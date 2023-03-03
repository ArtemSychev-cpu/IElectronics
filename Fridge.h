#pragma once
#include "Appliances.h"
#include "Portable.h"
#include <string>

class Fridge: public Portable, Appliances
{
public:
	Fridge(int freezertemperature, int weight, string color);
	
	void ShowSpec()override;
protected:
	int _freezertemperature;
};

