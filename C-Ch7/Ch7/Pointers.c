/*
 * Pointers.c
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
	int a = 7;
	int *aPtr;
	aPtr = &a;

	printf("\nValue of a : %d\n", a);
	printf("\nValue of *aPtr : %d\n", *aPtr);
	printf("\nAddress of a : %p\n", &a);
	printf("\nAddress of aPtr : %p\n", aPtr);
	printf("\nProviding that * and & are complements of each other \n&*aPtr = %p \n*&aPtr = %p", &*aPtr, *&aPtr);

	return 0;
}
