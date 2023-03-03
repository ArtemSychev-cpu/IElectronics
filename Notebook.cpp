#include "Notebook.h"
#include<iostream>
using namespace std;



Notebook::Notebook(int batteryLife, int weight, string color) :Portable(batteryLife), Appliances(weight, color)
{

}


void Notebook::ShowSpec()
{
	cout << "Battery life" << _batteryLife << endl;
	cout << "Weight" << _weight << endl;
	cout << "Color" << _color << endl;
}
