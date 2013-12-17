/*
 * DicesGame.c
 *
 *  Created on: Dec 9, 2013
 *      Author: Solrac
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <errno.h>
#include <signal.h>
#include <stddef.h>
#include <string.h>
#include <time.h>

int Roll(void);

main()
{
	int chances, suma;

	setvbuf(stdout, NULL, _IONBF, 0);
	srand(time(NULL));

	printf("Tira de dados \n");

	suma = Roll();

	switch (suma){
		case 7: case 11:
			printf("\nYou Win!");
			break;
		case 2 : case 3: case 12:
			printf("\nCraps!!! you lose...");
			break;
		default:
			printf("\nTry again! Throw the dices again.");
			suma = Roll();
			break;
	}
	return 0;
}

int Roll(void)
{
	int dice1, dice2, workSum;

	dice1 = 1 + (rand() % 6);
	dice2 = 1 + (rand() % 6);
	workSum = dice1 + dice2;

	printf("\n%10s%15s%15s","Dice 1", "Dice 2", "Sum");
	printf("\n%10d%15d%15d",dice1, dice2, workSum);
	return workSum;
}
