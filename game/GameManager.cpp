//=============================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: GameManager Class Code
//=============================================================================
#include "gameManager.h"
 
GameManager::GameManager() {
	if (!menuFont.loadFromFile("C:\\Windows\\Fonts\\arial.ttf"))
	{
		cout << "Unable to load menu font!" << endl;
		exit(EXIT_FAILURE);
	}
};

void GameManager::updateMenu() 
{
	if (startPressed) 
	{
		startPressed = false;
		gameLost = false;
		gameWon = false;
		resetlvl = true;
		timerStart = false;
		aliensKilled = 0;
		curLives = 3;
		curLevel = 1;
	}
	else if (endPressed) 
	{ 
		endPressed = false;
		exit(0);
	}
};

void GameManager::drawMenu(RenderWindow &window) 
{
	if (Timer != 0) 
	{
		Timer--; 
		if (gameLost) 
		{ 
			text.setFont(menuFont);
			text.setFillColor(Color(255, 153, 0));

			text.setString("You have lost!");
			text.setCharacterSize(50);
			text.setPosition(120, 100);
			window.draw(text);
		}
		else 
		{
			text.setFont(menuFont);
			text.setFillColor(Color(255, 153, 0));

			text.setString("You have won!");
			text.setCharacterSize(50);
			text.setPosition(120, 100);
			window.draw(text);
		}
	}
	else 
	{ 
		text.setFont(menuFont);
		text.setFillColor(Color(255, 153, 0));

		text.setString("Space Invaders");
		text.setCharacterSize(100);
		text.setPosition(120, 100);
		window.draw(text);

		startGame.setFont(menuFont);
		startGame.setFillColor(Color(255, 153, 0));
		endGame.setFont(menuFont);
		endGame.setFillColor(Color(255, 153, 0));

		startGame.setString("Start game");
		startGame.setCharacterSize(30);
		startGame.setPosition(310, 230);
		window.draw(startGame);

		endGame.setString("Quit");
		endGame.setCharacterSize(30);
		endGame.setPosition(310, 260);
		window.draw(endGame);
	}
};

void GameManager::displayData(RenderWindow &window)
{
	text.setFont(menuFont);

	text.setString("Lives " + to_string(curLives)
		+ " - Level " + to_string(curLevel) + " - Aliens killed " + to_string(aliensKilled));
	text.setFillColor(Color(255, 153, 0));
	text.setCharacterSize(24);
	text.setPosition(8, 0);

	window.draw(text);
};

bool GameManager::isGameRunning() 
{
	bool temp = true;
	if (gameWon || gameLost) {
		if (!timerStart) {
			Timer = MENU_TIMEOUT;
			timerStart = true;
		}
		temp = false;
	}
	return temp;
};

void GameManager::nextLevel() 
{
	if (curLevel != 2) {
		curLevel = 2;
		resetlvl = true;
	}
	else {
		gameWon = true;
	}
};

void GameManager::loseLife() 
{
	curLives--;
	if (curLives <= 0) {
		gameLost = true;
	}
	resetlvl = true;
};

bool GameManager::resetLevel() 
{
	bool tmp = resetlvl;
	if (resetlvl)
		resetlvl = false;
	return tmp;
}

void GameManager::mouseButtonReleased(Vector2f pos) {
	if (startGame.getGlobalBounds().contains(pos)) {
		startPressed = true;
	}

	if (endGame.getGlobalBounds().contains(pos)) {
		endPressed = true;
	}
}