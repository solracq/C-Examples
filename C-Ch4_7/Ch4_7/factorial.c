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
	int i, fact=1;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\nPrinting the factorial of 5\n");
	printf("Factorial = ");
	for (i = 5 ; i > 0 ; i--)
	{
		fact = fact * i;
		printf("%d ",i);
		if (i > 1 )
			printf("*");
	}

	printf("\nThe factorial of 5! is: %d\n",fact);

	return 0;
}
