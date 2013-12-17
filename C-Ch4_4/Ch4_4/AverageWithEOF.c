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
	int integers, count=1;
	float avg, sum=0;

	setvbuf(stdout, NULL, _IONBF, 0);

	do{
	printf("\nProvide integers to calculate their average @Ctrl-Z to quit@ : ");
	scanf("%d",&integers);

	sum += integers;
	avg = sum/count;

	printf("\nThe average: %.2f", avg);
	} while ( (integers = getchar()) != EOF );

	return 0;
}
