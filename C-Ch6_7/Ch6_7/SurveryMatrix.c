/*
 * SurveyMatrix.c
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
#define SIZE 99

void BubbleSort(int []);
void PrintMatrix(int []);
void Mean(int []);
void Median(int []);
void Mode(int []);

main()
{
	int frequency[10] = {0};
	int response[SIZE] = {6, 7, 8, 9, 8, 7, 8, 9, 8, 9, 7, 8, 9, 5, 9, 8, 7, 8, 7, 8, 6, 7, 8, 9, 3, 9, 8, 7, 8, 7, 7, 8, 9, 8, 9, 8, 9, 7, 8, 9, 6, 7, 8, 7, 8, 7, 9, 8, 9, 2, 7, 8, 9, 8, 9, 8, 9, 7, 5, 3, 5, 6, 7, 2, 5, 3, 9, 4, 6, 4, 7, 8, 9, 6, 8, 7, 8, 9, 7, 8, 7, 4, 4, 2, 5, 3, 8, 7, 5, 6, 4, 5, 6, 1, 6, 5, 7, 8, 7};

	Mean(response);
	Median(response);
	Mode(response);

	return 0;
}

void Mode(int a[])
{
	int i, j, k, maxix, max, freq[SIZE] = {0};

	printf("\n\n%s\n%s\n%s\n", "********", "Mode", "********");
	printf("\n%s%10s%30s\n", "Response", "Frequency", "Histogram");

	for (i = 0 ; i < SIZE ; i++)
		freq[a[i]]++;

	for (j = 1 ; j <= 9 ; j++)
	{
		printf("%d%10d", j, freq[j]);

		for (k = 1 ; k <= freq[j] ; k++)
		{
			if (k == 1)
				printf("%30s","*");
			else
				printf("*");
		}
		printf("\n");
	}

	printf("The mode is the most frequent value\n");

	max = freq[0];
	for (i = 1 ; i <= 9 ; i++ )
	{
		if (max < freq[i])
		{
			max = freq[i];
			maxix = i;
		}
	}
	printf("For this run the mode is %d wich occurred %d times\n", maxix, max);
}

void Median(int a[])
{
	int median, med;

	printf("\n\n%s\n%s\n%s\n", "********", "Median", "********");
	printf("The unsorted array of responses is:\n");
	PrintMatrix(a);

	printf("\n");
	printf("\nThe sorted array is:\n");
	BubbleSort(a);
	PrintMatrix(a);

	med = (int) ceilf(SIZE/2);
	median =a[med];

	printf("\n\nThe median is element %d of the sorted %d element array. For this run the median is %d\n", med, SIZE, median);
}

void Mean(int a[])
{
	int i, total = 0;
	float mean;
	printf("\n\n%s\n%s\n%s\n", "********", "Mean", "********");

	for (i = 0 ; i <= SIZE-1 ; i++)
	{
		total += a[i];
	}
	mean = (float) total / SIZE;
	printf("The mean is the average value of the data items. The mean is equal to the total of all the data items divided by the number of data items (99). The mean value for this run is: %d / %d = %.4f\n\n", total, SIZE, mean);
}

void BubbleSort(int array[])
{
	int i, pass, hold;

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
}

void PrintMatrix(int array[])
{
	int i;

	for (i = 0 ; i <= SIZE-1 ; i++)
	{
		if (i % 20 == 0)
			printf("\n");
		printf("%2d", array[i]);
	}
}
