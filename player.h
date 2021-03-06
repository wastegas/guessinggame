#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "getrand.h"

class Player {
private:
	std::string m_strName;
	int m_guessedNumber = 0;
	int m_guessCtr = 0;
	bool isCorrect = false;
	Player();
public:
	Player(std::string strName)
		: m_strName(strName)
	{
	}

	void guessNumber()
	{
		m_guessedNumber = getRand();
	}

	void guessedCorrect(int &theNumber)
	{
		if(m_guessedNumber == theNumber)
			isCorrect = true;
	}

	bool gotCorrect()
	{
		return isCorrect;
	}

	friend std::ostream& operator<<(std::ostream& out, const Player &cPlayer)
	{
		out << "Player " << cPlayer.m_strName << " guessed " << cPlayer.m_guessedNumber
			<< " number of guesses " << cPlayer.m_guessCtr << " is correct " 			
			<< cPlayer.isCorrect;
		return out;
	}

};
#endif
