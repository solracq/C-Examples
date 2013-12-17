/*
 * BubbleOrdering.c
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
#define SIZE 10

void PrintArray(int [], int);

main()
{
	int i, array[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
	int hold, pass;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Data items in original order: \n");
	PrintArray(array, SIZE);

	printf("\nData items in ascending order : \n");

	for (pass = 1 ; pass <= SIZE-1 ; pass++)
	{
		for (i = 0 ; i <= SIZE-2 ; i++)
		{
			if (array[i] > array[i+1])
			{
				hold = array[i];
				array[i] = array[i+1];
				array[i+1] = hold;
			}
		}
	}

	PrintArray(array, SIZE);

	return 0;
}

void PrintArray(int a[], int size)
{
	int i;
	for (i = 0 ; i <= size-1 ; i++)
		printf("%d  ", a[i]);
	printf("\n");
}

