# include "HeaderFile.h"

int Menu()
{
	int Choice;

	do
	{
		system("cls");
		printf("\n\n\t\t\t-==:MASTERMIND:==-");
		printf("\n\n\t\t\t..::MAIN MANU::..");
		printf("\n_________________________________________________________________");
		printf("\n\n\t1: |EASY| - excluding repetition & blanks");
		printf("\n\n\t2: |MEDIUM| - including repetition & NO blanks");
		printf("\n\n\t3: |HARD| - including repetition & blanks");
		printf("\n\n\t4: |EXIT|");
		printf("\n_________________________________________________________________");

		printf("\n\n\t|Choose Difficulty or Press 4  to Quit the Game| ");
		fflush(stdin);
		scanf("%d", &Choice);
		printf("\n_________________________________________________________________");
		printf("\n_________________________________________________________________");
	}while( (Choice < 1) || (Choice > 4) );
	

	return(Choice);
}

void easyMode()
{
	int i, j, input = 0, whitePeg = 0, blackPeg = 0;

	printf("\nEASY MODE SELECTED...\n\n");
	printf("The Colours\n");
	printf("\n1 = GREEN\n");
	printf("2 = YELLOW\n");
	printf("3 = RED\n");
	printf("4 = BLUE\n");
	printf("5 = ORANGE\n");
	printf("6 = BROWN\n");
	printf("7 = PURPLE\n");

	while(blackPeg != 4)
	{
		whitePeg = 0;
		blackPeg = 0;

		//user input
		for (i = 0; i < 4; i++)
		{
			printf("\nEnter the choice of your colors: ");
			fflush(stdin);
			scanf("%d", &input);
			inputArray [i] = input;
		}

		//compare 2 arrays
		for (i = 0; i < 4; i++)
		{//outer for
			for (j = 0; j < 4; j++)
			{
				if (genArray[i] == inputArray[j])
				{
					if (i == j)
					{
						blackPeg++;
					}
					else if (arrayHard[i] == inputArrayHard[j])
					{
						whitePeg++;
					}
				}
			}
		}

		printf("\n\tWHITE PEGS: %d \n", whitePeg);
		printf("\n\tBLACK PEGS: %d \n", blackPeg);

		if(blackPeg == 4)
		{
			printf("\nYOU WIN!\n");
			printf("\nPRESS ANY KEY TO RETURN TO THE MAIN MENU: ");
			_getch();
		}	
	}

}

void mediumMode()
{
	const int NumberOfTries = 15;
	int i, j, input = 0, whitePeg = 0, blackPeg = 0;
	int timesPlayed = 0;

	printf("\nMedium Mode Selected, Prepare...\n\n");
	printf("Colors\n");
	printf("1 = Green\n");
	printf("2 = Yellow\n");
	printf("3 = Red\n");
	printf("4 = Blue\n");
	printf("5 = Orange\n");
	printf("6 = Brown\n");
	printf("7 = Purple\n");

	while(blackPeg != 4 && timesPlayed != NumberOfTries)
	{
		whitePeg = 0;
		blackPeg = 0;

		//user input
		for (i = 0; i < 4; i++)
		{
			printf("\nEnter the choice of your colors: ");
			fflush(stdin);
			scanf("%d", &input);
			inputArray [i] = input;
		}

		timesPlayed++;
		//compare 2 arrays
		for (i = 0; i < 4; i++)
		{//outer for
			
			for (j = 0; j < 4; j++)
			{
				
				if (genArray[i] == inputArray[j])
				{
					if (i == j)
					{
						blackPeg++;
					}
					else if (arrayHard[i] == inputArrayHard[j])
					{
						whitePeg++;
					}
				}
			}
		}

		printf("You got %d white pegs!", whitePeg);
		printf("\nYou got %d black pegs!", blackPeg);

		if(blackPeg == 4)
		{
			printf("\nYou Win!\n");
			printf("Press any key to return to menu: ");
			_getch();
		}
		else if(timesPlayed == NumberOfTries)
		{
			printf("\nYou ran out of tries!\n ");
			printf("Press any key to return to menu: ");
			_getch();
		}
		
	}
	
}

void hardMode()
{
	const int NumberOfTries = 10;
	int i, j, input = 0, whitePeg = 0, blackPeg = 0;
	int timesPlayed = 0;

	printf("\nHard Mode Selected, Prepare...\n\n");
	printf("Colors\n");
	printf("0 = Blank\n");
	printf("1 = Green\n");
	printf("2 = Yellow\n");
	printf("3 = Red\n");
	printf("4 = Blue\n");
	printf("5 = Orange\n");
	printf("6 = Brown\n");
	printf("7 = Purple\n");

	while(blackPeg != 8 && timesPlayed != NumberOfTries)
	{
		whitePeg = 0;
		blackPeg = 0;

		//user input
		for (i = 0; i < 8; i++)
		{
			printf("\nEnter the choice of your colors: ");
			fflush(stdin);
			scanf("%d", &input);
			inputArrayHard [i] = input;
		}

		timesPlayed++;
		//compare 2 arrays
		for (i = 0; i < 8; i++)
		{//outer for
			for (j = 0; j < 8; j++)
			{
				if (arrayHard[i] == inputArrayHard[j])
				{
					if (i == j)
					{
						blackPeg++;
					}
					else if (arrayHard[i] == inputArrayHard[j])
					{
						whitePeg++;
					}
				}
			}
		}

		printf("You got %d white pegs!", whitePeg);
		printf("\nYou got %d black pegs!", blackPeg);

		if(blackPeg == 8)
		{
			printf("\nYou Win!\n");
			printf("Press any key to return to menu: ");
			_getch();
		}
		else if(timesPlayed == NumberOfTries)
		{
			printf("\nYou ran out of tries!\n");
			printf("Press any key to return to menu: ");
			_getch();
		}
		
	}
	
}