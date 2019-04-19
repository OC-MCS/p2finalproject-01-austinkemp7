//==================================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: Class Code for oneAlien
//==================================================================================
#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "oneAlien.h"
#include "spriteManager.h"

oneAlien::oneAlien(float x, float y, spriteManager & sMgr)
{
	alien.setPosition(x, y);
	alien = sMgr.getAlienSprite();
}

void oneAlien::setPosition(float x, float y)
{
	alien.setPosition(x, y);
}

void oneAlien::draw(RenderWindow& window)
{
	window.draw(alien);
}
