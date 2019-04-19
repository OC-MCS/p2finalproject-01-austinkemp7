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

oneAlien::oneAlien(GameManager* gmMgr, float x, float y, spriteManager & sMgr)
{
	alien.setPosition(x, y);
	alien = sMgr.getAlienSprite();
}

Vector2f oneAlien::getPosition()
{
	return alien.getPosition();
}

void oneAlien::draw(RenderWindow& window)
{
	window.draw(alien);
}

FloatRect oneAlien::getGlobalBounds()
{
	return alien.getGlobalBounds();
}

void oneAlien::move(float x, float y)
{
	alien.move(x, y);
}