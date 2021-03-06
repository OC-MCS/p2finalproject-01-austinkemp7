//==================================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: Class Definition for Missiles
//==================================================================================
#pragma once
#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;

class missile
{
private:
	Texture missileTexture;
	Sprite missile;

	const float DISTANCE = 10.0;
public:
	void move();
	void draw(RenderWindow &);
};