/*
 * LinearSearch.c
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
#define SIZE 100

int LinearSearch(int [], int);

main()
{
	int i, array[SIZE], keyNumber, searcher;
	int hold, pass;

	setvbuf(stdout, NULL, _IONBF, 0);

	for (i = 0 ; i <= SIZE-1 ; i++)
		array[i] = 2 * i;

	printf("Enter integer search key: \n");
	scanf("%d", &keyNumber);

	searcher = LinearSearch(array, keyNumber);

	if (searcher != -1)
		printf("\nFound value in element : %d\n",searcher);
	else
		printf("\nValue not found!\n");

	return 0;
}

int LinearSearch(int a[], int key)
{
	int i;

	for (i = 0 ; i <= SIZE-1 ; i++)
		if (a[i] == key)
			return i;

	return -1;
}

