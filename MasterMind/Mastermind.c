# include "HeaderFile.h"

main()
{
	int Choice;

	do
	{
		switch(Choice = Menu())
		{
		case 1:
			{
				numberGeneratorEasy();
				easyMode();
				break;
			}
		case 2:
			{
				numberGeneratorMedium();
				mediumMode();
				break;
			}
		case 3:
			{
				numberGeneratorHard();
				hardMode();
				break;
			}
		default:
			{
				printf("\n\nHope You Enjoyed the Game");
				break;
			}
		}
	} while(Choice != 4);
	
	printf("\n");
	system("pause");
} // main


void numberGeneratorEasy()
{
	int i, j, maxValue;

	maxValue = 8;

	srand (time(NULL));

	for (i = 0; i < 4; i++)
	{//for
		genArray [i] = rand()%maxValue+1;

		if (i == 1)
		{
			if (genArray[i] == genArray[i-1])
			{
				do
				{
					genArray [i] = rand()%maxValue+1;
				}while(genArray [i] == genArray[i-1]);
			}
		}

		if (i == 2)
		{
			if (genArray[i] == genArray[i-1] || genArray[i] == genArray[i-2])
			{
				do
				{
					genArray [i] = rand()%maxValue+1;
				}while(genArray[i] == genArray[i-1] || genArray[i] == genArray[i-2]);
			}
		}

		if (i == 3)
		{
			if (genArray[i] == genArray[i-1] || genArray[i] == genArray[i-2] || genArray[i] == genArray[i-3])
			{
				do
				{
					genArray [i] = rand()%maxValue+1;
				}while(genArray[i] == genArray[i-1] || genArray[i] == genArray[i-2] || genArray[i] == genArray[i-3]);
			}
		}
	}//for

	for (j = 0; j < 4; j++)
	{
		printf("%d ", genArray[j]);
	}
}

void numberGeneratorMedium()
{
	int i, j, maxValue;

	maxValue = 8;

	srand (time(NULL));

	for (i = 0; i < 4; i++)
	{//for
		genArray [i] = rand()%maxValue+1;
	}//for

	for (j = 0; j < 4; j++)
	{
		printf("%d ", genArray[j]);
	}
}

void numberGeneratorHard()
{
	int i, j, maxValue;

	maxValue = 8;

	srand (time(NULL));

	for (i = 0; i < 8; i++)
	{//for
		arrayHard [i] = rand()%maxValue;
	}//for

	printf("\n\n");
	for (j = 0; j < 8; j++)
	{
		printf("%d ", arrayHard[j]);
	}
}