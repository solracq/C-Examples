/*
 * Cards.c
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
#define SIZE 52

union number{
	int x;
	float y;
};

main()
{
	union number value;

	value.x=100;
	printf("Put value in the integer member and print both members\n int: %d\n float: %f\n\n", value.x, value.y);
	value.y=100.0;
	printf("Put value in the floating member and print both members\n int: %d\n float: %f\n\n", value.x, value.y);

	return 0;
}
