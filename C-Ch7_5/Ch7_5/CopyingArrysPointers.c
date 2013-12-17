/*
 * CopyingArrysPointers.c
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

void copy1(char *, const char *);
void copy2(char *, const char *);

main()
{
	char string1[10], *string2 = "Hello";
	char string3[10], string4[] = "Good Bye";

	//setvbuf(stdout, NULL, _IONBF, 0);

	copy1(string1, string2);
	printf("String1 = \n");
	copy2(string3, string4);
	printf("String2 = \n");

	return 0;
}

void copy1(char *s1, const char *s2)
{
	int i;
	for (i = 0 ; s1[i] = s2[i] ; i++)
		;
}

void copy2(char *s3, const char *s4)
{
	for ( ; *s3 = *s4 ; s3++, s4++)
		;
}
