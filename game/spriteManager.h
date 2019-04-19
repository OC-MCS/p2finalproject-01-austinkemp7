//==================================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: Class Definition for SpriteManager
//==================================================================================
#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <list>
using namespace std;
using namespace sf;

class spriteManager
{
private:
	Texture missileTexture;
	Sprite missileSprite;

	Texture shipTexture;
	Sprite shipSprite;

	Texture alienTexture; 
	Sprite alienSprite;

	Texture starsTexture;
	Sprite backgroundSprite;
public:
	spriteManager();

	Sprite getMissileSprite();
	Sprite getShipSprite();
	Sprite getAlienSprite();
	Sprite getBackgroundSprite();
};
