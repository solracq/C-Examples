/*
 * FactorialRecursive.c
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

long Factorial(long);

main()
{
	int i, fact=1;

	setvbuf(stdout, NULL, _IONBF, 0);

	for (i = 1 ; i <= 10 ; i++)
	{
		printf("%d! = %ld \n", i, Factorial(i));
	}

	return 0;
}

long Factorial(long number)
{
	if (number <= 1)
		return 1;
	else
		return number * Factorial( number - 1 );
}
