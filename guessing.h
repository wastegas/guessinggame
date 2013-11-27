#ifndef GUESSING_H
#define GUESSING_H

#include <iostream>
#include <string>
#include <vector>
#include "player.h"
#include "getrand.h"

class GuessingGame {
private:
	std::vector<Player> player;
	int m_theNumber = 0;
	GuessingGame();
public:
	GuessingGame(std::vector<Player> vName)
		: player(vName), m_theNumber(makeNumber()) {}
	
	int makeNumber()
	{
/*		std::random_device rd;
		std::mt19937 gen(rd());
		std::uniform_int_distribution<> dis(1, 10);
*/		return getRand();
	}

	void makeGuess()
	{
		for(auto iter = player.begin(); iter != player.end(); iter++) {
			iter->guessNumber();
			iter->guessedCorrect(m_theNumber);
		}
	}

	bool isWinner()
	{
		for(auto iter = player.begin(); iter != player.end(); iter++)
		{
			if(iter->gotCorrect())
				return true;
		}
		return false;
	}


	friend std::ostream& operator<<(std::ostream& out, const GuessingGame &gGame)
	{
		for(auto iter = gGame.player.cbegin(); iter != gGame.player.cend(); iter++) {
			out << *(iter) << std::endl;
		}
		return out;
	}
	

};

#endif
