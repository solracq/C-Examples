/*
 * FibonacciRecursive.c
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

long Fibonacci(long);

main()
{
	int i, j, result = 0;

	setvbuf(stdout, NULL, _IONBF, 0);

	for (i = 0 ; i <= 10 ; i++)
	{
		printf("Fibonacci(%d) = ", i);
		for (j = 0 ; j <= i ; j++)
		{
			printf("%ld ", Fibonacci(j));

			if (j < 10)
				printf(", ");
		}
		result += Fibonacci(i);
		printf(" = %ld", result);
		printf("\n");
	}

	return 0;
}

long Fibonacci(long number)
{
	if (number == 0 || number == 1)
		return number;
	else
		return Fibonacci(number - 1) + Fibonacci(number - 2);
}
