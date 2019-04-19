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

Aliens::Aliens(Sprite &b, spriteManager & sMgr, GameManager &gmMgr)
{
	for (int i = 0; i < 10; i++)
	{
		oneAlien temp(&gmMgr, 35.0f + (75.0f * i), 20.0f, sMgr);
		aliens.push_back(temp);
	}

	spriteMgr = sMgr;
}

void Aliens::moveAliens()
{
	list <oneAlien>::iterator iter;
	for (iter = aliens.begin(); iter != aliens.end(); iter++)
	{
		iter->move(0, 2);
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
