/*
 * C-sqrFunction.c
 *
 *  Created on: Dec 9, 2013
 *      Author: Solrac
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Maximum(int, int, int);

main()
{
	int a, b, c, largest;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\nProvide the first number to compare: ");
	scanf("%d", &a);
	printf("\nProvide the second number to compare: ");
	scanf("%d", &b);
	printf("\nProvide the third number to compare: ");
	scanf("%d", &c);

	largest = Maximum(a, b, c);

	printf("\nThe largest number is: %d", largest);
}

int Maximum(int num1, int num2, int num3)
{
	int max = num1;

	if (max < num2)
		max = num2;
	else if (max < num3)
		max = num3;
	return max;
}
