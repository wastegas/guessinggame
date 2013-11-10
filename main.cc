#include <iostream>
#include "guessing.h"

int main()
{
	GuessingGame game("1");

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
	return 0;
}
