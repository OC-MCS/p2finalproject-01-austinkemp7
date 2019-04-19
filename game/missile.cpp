//==================================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: Class Code for Missiles
//==================================================================================
#include <iostream>
#include "missile.h"
using namespace std;
using namespace sf;

void missile::move()
{
	missile.move(0, -DISTANCE);
}

void missile::draw(RenderWindow & window)
{
	window.draw(missile);
}
