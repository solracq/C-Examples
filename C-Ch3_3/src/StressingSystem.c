/*
 ============================================================================
 Name        : StressingSystem.c
 Author      : Carlos Quiroz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main() {
	int counter=1;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Counting from 1 to 3,000,000\n");

	while (counter <= 3000000)
	{
		counter++;
		if (counter%1000000 == 0)
			printf("\nFound a multiple of 1000000: %d", counter);
	}

	return 0;
}
