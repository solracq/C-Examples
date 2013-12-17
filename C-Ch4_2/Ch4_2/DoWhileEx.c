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
	int c=1,num;
	int total=0;

	setvbuf(stdout, NULL, _IONBF, 0);

	do {
		if (c == 5)
			continue; // Skips the do procedure when c=5
		printf("\nInput a number for no. %d\n",c);
		scanf("%d",&num);
		total += num;
	} while (++c <= 10);

	printf("\nThe total is %.d", total);

	return 0;
}
