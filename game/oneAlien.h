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
#include "GameManager.h"

class oneAlien
{
private: 
	Sprite alien;
	Texture alienTexture;
	float alienPosition;
public:
	oneAlien(GameManager *, float, float, spriteManager &);
	Vector2f getPosition();
	FloatRect getGlobalBounds();
	void draw(RenderWindow&);
	void move(float x, float y);
};
