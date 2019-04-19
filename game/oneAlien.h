//==================================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: Class Definition for oneAlien
//==================================================================================
#pragma once
#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "spriteManager.h"

class oneAlien
{
private: 
	Sprite alien;
	Texture alienTexture;
	float alienPosition;
public:
	oneAlien(float, float, spriteManager &);
	void setPosition(float x, float y);
	void draw(RenderWindow&);
};
