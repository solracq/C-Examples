/*
 * C-sqrFunction.c
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
#define SIZE 6

int Roll(int);

main()
{
	int chances;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Tiros de dados: \n");
	printf("Cuantos chances para tirar? \n");
	scanf("%d", &chances);
	printf("\n");
	Roll(chances);
}

int Roll(int tries)
{
	int i, j;
	int face, freqency[SIZE+1] = {0};
	srand(time(NULL));

	for (i = 1 ; i <= tries ; i++)
	{
		face = (rand() % 6) + 1;
		//printf("%10d",res);
		//if (i % 5 == 0)
			//printf("\n");
		freqency[face]++;
	}

	printf("\n%10s%15s","Face", "Frequency");

	for (j = 1 ; j <= SIZE ; j++)
	printf("\n%10d%15d", j, freqency[j]);

}
