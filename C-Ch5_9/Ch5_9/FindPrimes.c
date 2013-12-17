/*
 * FindPrimes.c
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

main()
{
	int i, n, prime, constant=3, c;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("PRIME NUMBER CALCULATOR \n");
	printf("Decide range to calculate primes \n");
	scanf("%d", &n);

	if (n >= 1)
	{
		printf("First %d prime numbers are: \n", n);
		printf("2\n");
	}

	for (i = 2 ; i <= n ; i++)
		{
			for ( c = 2 ; c <= constant - 1 ; c++)
			{
				if (constant % c == 0)
					break;
			}
			if ( c == constant)
			{
				printf("%d\n", constant);
				i++;
			}
			constant++;
		}
	return 0;
}
