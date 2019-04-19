//==================================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: Class Code for Aliens
//==================================================================================
#include <iostream>
#include <SFML/Graphics.hpp>
using namespace sf;
#include "Aliens.h"
#include "oneAlien.h"
using namespace std;

Aliens::Aliens(spriteManager & sMgr)
{
	for (int i = 0; i < 10; i++)
	{
		oneAlien temp(35.0f + (75.0f * i), 10.0f, sMgr);
		aliens.push_back(temp);
	}
}

void Aliens::moveAliens()
{
	list <oneAlien>::iterator iter;
	for (iter = aliens.begin(); iter != aliens.end(); iter++)
	{
		
	}
}

void Aliens::drawAliens(RenderWindow& window)
{
	list <oneAlien>::iterator iter;
	for (iter = aliens.begin(); iter != aliens.end(); iter++)
	{
		iter->draw(window);
	}
}

void Aliens::setTexture(Texture alienTexture)
{
	
}