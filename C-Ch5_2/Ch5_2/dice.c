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
	int i;
	int face, freq1=1, freq2=1, freq3=1, freq4=1, freq5=1, freq6=1;
	srand(time(NULL));

	for (i = 1 ; i <= tries ; i++)
	{
		face = (rand() % 6) + 1;
		//printf("%10d",res);
		//if (i % 5 == 0)
			//printf("\n");
		switch (face)
		{
		case 1:
			++freq1;
			break;
		case 2:
			++freq2;
			break;
		case 3:
			++freq3;
			break;
		case 4:
			++freq4;
			break;
		case 5:
			++freq5;
			break;
		case 6:
			++freq6;
			break;
		default:
			break;
		}
	}

	printf("\n%10s%15s","Face", "Frequency");
	printf("\n%10s%15d","1", freq1);
	printf("\n%10s%15d","2", freq2);
	printf("\n%10s%15d","3", freq3);
	printf("\n%10s%15d","4", freq4);
	printf("\n%10s%15d","5", freq5);
	printf("\n%10s%15d","6", freq6);
}
