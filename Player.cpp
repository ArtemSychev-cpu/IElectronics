#include "Player.h"
#include <iostream>
using namespace std;
Player::Player(int totalTracks, int batteryLife) :_totalTracks(totalTracks), Portable(batteryLife)
{
	
}

void Player::ShowSpec()
{
	cout << _batteryLife << endl;
	cout << _totalTracks << endl;
}
