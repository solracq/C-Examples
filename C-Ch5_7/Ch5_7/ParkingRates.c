/*
 * PowerNumber.c
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

long IntegerPower(int, int);

main()
{
	int base, exponential, result;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Provide the base and exponential to execute pow operation (base,exponential format) : \n");
	scanf("%d%d", &base, &exponential);

	result = IntegerPower(base, exponential);

	printf("\n(%d,%d) = %d \n", base, exponential, result);

	return 0;
}

long IntegerPower(int bas, int exp)
{
	int i, res = 1;

	for (i = 1 ; i <= exp ; i++)
		res *= bas;

	return res;
}
