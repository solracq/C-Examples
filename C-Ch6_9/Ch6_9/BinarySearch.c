/*
 * BainarySearch.c
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
#define SIZE 15

int BinarySearch(int [], int, int, int);
void PrintHeader(void);
void PrintRow(int [], int, int, int);

main()
{
	int array[SIZE], i, searchKey, searcher;

	setvbuf(stdout, NULL, _IONBF, 0);

	for (i = 0 ; i <= SIZE -1 ; i++)
		array[i] = i*2;

	printf("Enter a number between 0 and 28:\n");
	scanf("%d", &searchKey);

	PrintHeader();
	searcher = BinarySearch(array, searchKey, 0, SIZE-1);

	if (searcher != -1)
		printf("\n%d found in array element %d\n", searchKey, searcher);
	else
		printf("\n%d not found!\n", searchKey);

	return 0;
}

void PrintHeader(void)
{
	int i;

	printf("\nSubscriptions:\n");
	for (i = 0 ; i <= SIZE-1 ; i++)
		printf("%3d ", i);

	printf("\n");

	for (i = 1 ; i <= SIZE * 4 ; i++)
		printf("-");
	printf("\n");
}

void PrintRow(int a[], int low, int mid, int high)
{
	int i;

	for (i = 0 ; i <= SIZE-1 ; i++)
	{
		if (i < low || i > high)
			printf("    ");
		else if (i == mid)
			printf("%3d*", a[i]);
		else
			printf("%3d ", a[i]);
	}
	printf("\n");
}

int BinarySearch(int a[], int key, int low, int high)
{
	int middle;

	while (low <= high)
	{
		middle = (high + low) / 2;

		PrintRow(a, low, middle, high);

		if (key == a[middle])
			return middle;
		else if (key < a[middle])
			high = middle -1;
		else
			low = middle + 1;
	}
	return -1;
}
