#include "Appliances.h"
#include <iostream>
using namespace std;

Appliances::Appliances(int weight, string color) :_weight(weight), _color(color)
{
}

void Appliances::ShowSpec()
{
    cout << _weight << endl;
}