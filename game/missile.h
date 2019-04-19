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
public:
	void loadFromFile();
};