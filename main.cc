#include <iostream>
#include <vector>
#include <string>
#include "guessing.h"

int main()
{
	std::vector<Player> vplayers;
	int noOfPlayers = 0;
	std::cout << "How many players? ";
	std::cin >> noOfPlayers;
	std::string pName;
	for(int i = 1; i <= noOfPlayers; i++) {
		std::cout << "Enter Player " << i << " " << "Name ";
		std::cin >> pName;
		vplayers.push_back(pName);
	}

	GuessingGame game(vplayers);
	std::cout << game << std::endl;
	while(1)
	{
		game.makeGuess();
		if(game.isWinner())
		{
			std::cout << game << std::endl;
			break;
		}
		std::cout << game << std::endl;
	}
	
	
	
	while(1)
	{

	}

	return 0;
}
