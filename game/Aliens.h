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
#include <list>
#include "oneAlien.h"
using namespace sf;

class Aliens
{
private:
	list<oneAlien> aliens;
	spriteManager spriteMgr;
public:
	Aliens(Sprite &, spriteManager &, GameManager &);
	void moveAliens();
	void drawAliens(RenderWindow&);
};
