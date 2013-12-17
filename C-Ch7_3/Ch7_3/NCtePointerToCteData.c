/*
 * NCtePointerToCteData.c
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

void PrintCharactersWhile(const char *);
void PrintCharactersFor(const char *);

main()
{
	char array[] = "Print Characters of a string";

	//setvbuf(stdout, NULL, _IONBF, 0);

	printf("The string is \n");
	PrintCharactersWhile(array);
	putchar('\n');
	PrintCharactersFor(array);
	putchar('\n');
	return 0;
}

void PrintCharactersWhile(const char *aPtr)
{
	while (*aPtr != '\0')
	{
		putchar(*aPtr);
		aPtr++;
	}
}

void PrintCharactersFor(const char *bPtr)
{
	for( ; *bPtr != '\0' ; bPtr++)
		//*bPtr -= 32; // attempt to change the constant data
		putchar(*bPtr);
}
