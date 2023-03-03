#include "Fridge.h"
#include <iostream>
#include <string>
using namespace std;
 
Fridge::Fridge(int freezertemperature, int weight, string color) : _freezertemperature(freezertemperature), Appliances(weight, color)
{

}
void Fridge:: ShowSpec()
{
	cout << "Freezer temperature" << _freezertemperature << endl;
	cout << "Weight" << _weight << endl;
	cout << " Color" << _color << endl;
}