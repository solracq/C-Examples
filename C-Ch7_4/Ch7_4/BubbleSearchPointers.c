/*
 * BubbleSearchPointers.c
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

void BubbleSearch(int *, const int);
void PrintArray(int *);

main()
{
	int array[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

	//setvbuf(stdout, NULL, _IONBF, 0);

	printf("Data items in original order\n");
	PrintArray(array);
	printf("\n");
	printf("Data items in ascending order\n");
	BubbleSearch(array, SIZE);
	PrintArray(array);

	return 0;
}

void BubbleSearch(int *aPtr, const int size)
{
	int i, pass;
	void swap(int *, int *);

	for (pass = 1 ; pass <= size-1 ; pass++)
	{
		for (i = 0 ; i <= size - 2 ; i++)
		{
			if(aPtr[i] > aPtr[i+1])
				swap(&aPtr[i], &aPtr[i+1]);
		}
	}
}

void swap(int *b, int *c)
{
	int temp;

	temp = *b;
	*b = *c;
	*c = temp;
}

void PrintArray(int *aPtr)
{
	int i;

	for(i = 1 ; i <= SIZE-1 ; i++)
		printf("%d ", aPtr[i]);
}
