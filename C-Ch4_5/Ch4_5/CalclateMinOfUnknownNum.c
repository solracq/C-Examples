/*
 * C-MilesPerGallonPerTank.c
 *
 *  Created on: Dec 9, 2013
 *      Author: Solrac
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int min, remain, i, j, number;
	int array[20];

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\nInput the first number of the list (less than 20) to calculate the minimum value:\n");
	scanf("%d", &remain);

	printf("\nYou have left %d tries to input a new number to calculate\n", remain);

	for (i=1 ; i <= remain ; i++)
	{
		printf("Provide another number: \n");
		scanf("%d", &number);
		array[i] = number;
	}
	min = remain;

	for (j = 0 ; j <= remain ; j++)
	{
		if (min > array[j])
		{
			min = array[j];
		}
	}

	printf("The minimum is: %d\n",min);

	return 0;
}
