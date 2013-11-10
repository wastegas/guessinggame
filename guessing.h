#ifndef GUESSING_H
#define GUESSING_H

#include <iostream>
#include <string>
#include <random>
#include "player.h"

class GuessingGame {
private:
	Player player;
	int m_theNumber = 0;
	GuessingGame();
public:
	GuessingGame(std::string strName)
		: player(strName), m_theNumber(makeNumber()) {}
	
	int makeNumber()
	{
		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1, 10);
		return dis(gen);
	}

	void makeGuess()
	{
		player.guessNumber();
		player.guessedCorrect(m_theNumber);
	}

	bool isWinner()
	{
		if(player.gotCorrect())
			return true;
		return false;
	}


	friend std::ostream& operator<<(std::ostream& out, const GuessingGame &gGame)
	{
		out << gGame.player;
		return out;
	}
	

};

#endif
