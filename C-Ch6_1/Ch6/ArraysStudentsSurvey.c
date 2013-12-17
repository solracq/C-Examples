/*
 * ArraysStudentsSurvey.c
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
#define SIZE 40

main()
{
	int i, j, results = 0, frequency[11] = {0}, students[SIZE] = {0};
	srand(time(NULL));

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("%10s%15s%25s\n", "Student No.", "Grade (1-10)", "HISTOGRAM");
	for (i = 0 ; i <= SIZE-1 ; i++)
	{
		students[i] = 1 + (rand() % 10);
		results += students[i];
		frequency[students[i]]++;

		printf("%10d%15d", i+1, students[i]);

		for (j = 1 ; j <= students[i] ; j++)
		{
			if (j == 1)
				printf("%20s", "*");
			else
				printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("%15s%15d\n", "TOTAL", results);

	printf("\n%10s%20s%25s\n", "Grade (1-10)", "Frequency of the result", "HISTOGRAM");
	for (i = 1 ; i <= 10 ; i++)
	{
		printf("%10d%20d", i, frequency[i]);

		for (j = 1 ; j <= frequency[i] ; j++)
				{
					if (j == 1)
						printf("%25s", "*");
					else
						printf("*");
				}
				printf("\n");
	}

	return 0;
}
