/*
 * Strings.c
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

void staticArrayInt(void);
void automaticArrayInt(void);

main()
{
	printf("\nFirst call to each function \n");
	staticArrayInt();
	automaticArrayInt();
	printf("\n\nSecond call to each function \n");
	staticArrayInt();
	automaticArrayInt();

	return 0;
}

void staticArrayInt(void)
{
	static int a[3];
	int i;

	printf("\nValues on entering staticArrayInt:\n");
	for (i = 0 ; i < 3 ; i++ )
		printf("array1[%d] = %d    ", i, a[i]);
	printf("\nValues on exiting staticArrayInt:\n");
		for (i = 0 ; i < 3 ; i++ )
			printf("array1[%d] = %d    ", i, a[i]+=5);
}

void automaticArrayInt(void)
{
	static int b[] = {1, 2, 3};
	int i;

	printf("Values on entering staticArrayInt:\n");
	for (i = 0 ; i < 3 ; i++ )
		printf("array1[%d] = %d    ", i, b[i]);
	printf("\nValues on exiting staticArrayInt:\n");
		for (i = 0 ; i < 3 ; i++ )
			printf("array1[%d] = %d    ", i, b[i]+=5);
}
