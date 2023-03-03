#include "Portable.h"
#include <iostream>
using namespace std;

Portable::Portable(int batteryLife) : _batteryLife(batteryLife)
{
}

void Portable::ShowSpec()
{
    cout << _batteryLife << endl;
}
