#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

extern int NumberOfTries;

int genArray [4];
int inputArray [4];
int arrayHard [8];
int inputArrayHard [8];
int Menu();

//array generators
void numberGeneratorEasy();
void numberGeneratorMedium();
void numberGeneratorHard();

//difficulty
void easyMode();
void mediumMode();
void hardMode();