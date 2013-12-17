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
	int i,j, x, y;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Give me a value for x and y : ");
	scanf("%d%d",&x,&y);

	for (i = 1 ; i <= x ; i++)
	{
		printf("\n");
		for (j = 1 ; j <= y ; j++)
			printf("@");
	}

	return 0;
}
