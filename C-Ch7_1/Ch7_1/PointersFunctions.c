/*
 * NCtePointerToNCteData.c
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

void ConvertToUpperCase(char *);

main()
{
	char array[] = "characters";

	printf("The string before conversion is %s\n", array);
	ConvertToUpperCase(array);
	printf("The string after conversion is %s\n", array);

	return 0;
}

void ConvertToUpperCase(char *arrayPtr)
{
	while (*arrayPtr != '\0')
	{
		if (*arrayPtr >= 'a' || *arrayPtr <= 'z')
			*arrayPtr -= 32;

		++arrayPtr;
	}
}
