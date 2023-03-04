#pragma once
#include <string>
#include "Appliances.h"
#include "Portable.h"
class Notebook final: public Portable, Appliances
{
public:
	Notebook(int batteryLife, int weight, string color);
	void ShowSpec() override;

};

