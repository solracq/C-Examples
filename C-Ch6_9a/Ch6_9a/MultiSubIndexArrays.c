/*
 * MultiSubIndexArrays.c
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
#define ROWSIZE 2
#define COLUMNSIZE 3

void PrintArray(int [][3]);

main()
{
	int i, j, array[ROWSIZE][COLUMNSIZE];
	int array1[2][3] = {{3, 2, 1}, {4, 5, 6}};
	int array2[2][3] = {1, 2, 3, 4, 5};
	int array3[2][3] = {{1, 2}, {4}};

	printf("\nValues of Array 1 by row are:\n");
	PrintArray(array1);

	printf("\nValues of Array 2 by row are:\n");
	PrintArray(array2);

	printf("\nValues of Array 3 by row are:\n");
	PrintArray(array3);

	for (i = 0 ; i <= ROWSIZE - 1 ; i++)
		{
			for (j = 0 ; j <= COLUMNSIZE - 1 ; j++)
			{
				array[i][j] = 1 * 2;
			}
		}

	printf("\nValues of Array:\n");
	PrintArray(array);

	return 0;
}

void PrintArray(int a[][3])
{
	int i, j;

	for (i = 0 ; i <= ROWSIZE - 1 ; i++)
	{
		for (j = 0 ; j <= COLUMNSIZE - 1 ; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
