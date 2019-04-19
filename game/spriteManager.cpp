//==================================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: spriteManager class code
//==================================================================================
#include "spriteManager.h"

spriteManager::spriteManager()
{
	if (!missileTexture.loadFromFile("missile.png"))
	{
		cout << "Unable to load missile texture!" << endl;
		exit(EXIT_FAILURE);
	}
	missileSprite.setTexture(missileTexture);

	if (!starsTexture.loadFromFile("stars.jpg"))
	{
		cout << "Unable to load stars texture!" << endl;
		exit(EXIT_FAILURE);
	}
	backgroundSprite.setTexture(starsTexture);

	if (!alienTexture.loadFromFile("enemy.png"))
	{
		cout << "Unable to load alien texture!" << endl;
		exit(EXIT_FAILURE);
	}
	alienSprite.setTexture(alienTexture);

	if (!shipTexture.loadFromFile("ship.png"))
	{
		cout << "Unable to load ship texture!" << endl;
		exit(EXIT_FAILURE);
	}
	shipSprite.setTexture(shipTexture);
}

Sprite spriteManager::getMissileSprite()
{
	return missileSprite;
}

Sprite spriteManager::getAlienSprite()
{
	return alienSprite;
}

Sprite spriteManager::getShipSprite()
{
	return shipSprite;
}

Sprite spriteManager::getBackgroundSprite()
{
	return backgroundSprite;
}
