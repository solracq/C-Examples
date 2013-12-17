/*
 * C-sqrFunction.c
 *
 *  Created on: Dec 9, 2013
 *      Author: Solrac
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int square(int);

main()
{
	int i, x;

	for (i=1 ; i <= 10 ; i++)
	{
		x= square(i);
	    printf("%d", x);
	    if (i<10)
	    {
	    	printf(", ");
	    }
	}
	return 0;
}

int square(int y)
{
	return y*y;
}
