/*
 * PointersFunctions.c
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

int CubeByValue(int);
void CubeByReference(int *);

main()
{
	int num = 5, result;
	//int *numPtr;

	//numPtr = &num;

	printf("The original value of number is %d\n", num);
	//result = CubeByValue(num);
	CubeByReference(&num);
	printf("The new value of number is %d\n", num);

	return 0;
}

int CubeByValue(int a)
{
	return a*a*a;
}

void CubeByReference(int *aPtr)
{
	*aPtr = (*aPtr)*(*aPtr)*(*aPtr);
}
