/*
 * PassingArraysFunctions.c
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

void modifyArray(int [], int);
void modifyElement(int);

main()
{
	int i, array[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Effects of passing entire array call by reference: \n");

	printf("\nThe value of the original array are : \n");
	for (i = 0 ; i <= SIZE-1 ; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");

	printf("\nThe value of the modified array are : \n");
	modifyArray(array, SIZE);
		for (i = 0 ; i <= SIZE-1 ; i++)
		{
			printf("%d ", array[i]);
		}
		printf("\n\n");

	printf("Effects of passing array element call by value:\n");
	printf("The value of a[3] is %d\n", array[3]);
	modifyElement(array[3]);
	printf("The value of a[3] is %d\n", array[3]);

	return 0;
}

void modifyArray(int a[], int size)
{
	int i;
	for (i = 0 ; i <= size-1 ; i++)
		a[i] *= 2;
}

void modifyElement(int b)
{
	printf("Value in modifyElement is %d\n", b*=2);
}
