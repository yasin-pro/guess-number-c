#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Building a guessing game

// Main Function
int main()
{

	int secretNumber = 10;
	int guess;
	int guessCount = 0;
	int guessLimit = 3;
	// for result of guess (bool functionality)
	int outOfGuesses = 0;

	while(guess != secretNumber && outOfGuesses == 0)
	{
		if(guessCount < guessLimit)
		{
			printf("Enter a number : \n");
			scanf("%d" , &guess);
			guessCount++;
		}else{
			outOfGuesses = 1;
		}
		
	}
	if(outOfGuesses == 1)
	{
		printf("Out of guesses\n");
	}else{
		printf("You Win!\n");
	}

	return 0;
}