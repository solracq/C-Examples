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
#define SIZE 30

main()
{
	int i;
	char string1[SIZE];
	char string2[]="Yuyis and Birlochas!";

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Type any sentence: \n");
	scanf("%s", string1);
	printf("\nRe-printing sentence: %s\n", string1);
	printf("\nFirst word : %c\n", string1[0]);
	printf("\nPrinting a new sentence : %s\n", string2);

	for (i = 0 ; string1[i] != '\0' ; i++)
	{
		printf("%c", string1[i]);
			if (i < SIZE-1)
				printf(" ");
	}

	return 0;
}
