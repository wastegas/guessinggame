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

	while(1)
	{
		game.makeGuess();
		if(game.isWinner())
		{
			std::cout << game << std::endl;
			std::cout << "*** game over ***" << std::endl;
			break;
		}
		std::cout << game << std::endl;
	}
	
	return 0;
}
