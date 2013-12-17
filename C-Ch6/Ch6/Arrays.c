/*
 * Arrays.c
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

main()
{
	int i, array[SIZE] = {0};

	setvbuf(stdout, NULL, _IONBF, 0);

	for (i = 0 ; i <= SIZE-1 ; i++)
	{
		array[i] = i + 7 ;

		if (i % 2 == 0)
			array[i] = 83;
	}

	printf("%10s%15s\n", "Element", "Value");
	for (i = 0 ; i <= SIZE-1 ; i++)
		printf("%10d%15d\n", i, array[i]);

	return 0;
}
