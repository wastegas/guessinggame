#include <iostream>
#include <vector>
#include <string>
#include "guessing.h"

int main()
{
	std::cout << "How many players? ";
	int noOfPlayers = 0;
	std::cin >> noOfPlayers;
	if (noOfPlayers < 1)
	{
		std::cout << "too few players" << std::endl;
		return 0;
	}

	std::string pName;
	std::vector<Player> vplayers;
	for(int i = 1; i <= noOfPlayers; i++) {
		std::cout << "Enter Player " << i << "'s " << "Name ";
		std::cin >> pName;
		if(!pName.empty())
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
