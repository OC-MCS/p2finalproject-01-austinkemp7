#pragma once
//==================================================================================
// Austin Kemp
// Due April 19th, 2019
// Programming 2 Final Project
// Description: Class Definition for GameManager
//==================================================================================
#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <list>
using namespace std;
using namespace sf;

class GameManager {
private:
	int curLevel = 1; 
	int curLives = 3; 
	int aliensKilled = 0;  

	bool gameLost = false; 
	bool gameWon = false;  

	Font menuFont;  

	Text text;		
	Text startGame; 
	Text endGame; 

	bool startPressed = false; 
	bool endPressed = false;   

	bool resetlvl = false; 

	const int MENU_TIMEOUT = 120; 
	int Timer = 0;
	bool timerStart = false;      

public:
	GameManager();

	void updateMenu();
	void drawMenu(RenderWindow &window);
	void displayData(RenderWindow &window);

	// returns true if the game is not on the menu
	bool isGameRunning();

	// advances to the next level of the game
	void nextLevel();

	// resets the level to the start 
	bool resetLevel();

	// decreases the number of lives the ship has left
	void loseLife();

	// called when the mouse clicker is released
	void mouseButtonReleased(Vector2f pos);

	// called when the game hits a win/lose state
	void win() 
	{ 
		gameWon = true; 
	};

	void gameOver() 
	{ 
		gameLost = true; 
	};

	int getLives() 
	{ 
		return curLives; 
	};

	int getLevel() 
	{ 
		return curLevel; 
	};

	void alienKilled() 
	{ 
		aliensKilled++; 
	}
};