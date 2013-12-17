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
	int i, prod=1;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\nPrinting the product of odd numbers from 1 to 15\n");
	printf("Odd Numbers = 0 ");
	for (i = 1 ; i <= 15 ; i+=2)
	{
		prod = prod * i;
		printf("* %d",i);
	}

	printf("\nThe product is: %d\n",prod);

	return 0;
}
