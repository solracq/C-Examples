/*
 * ScopeOfLocalGlobalVars.c
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

void a(void);
void b(void);
void c(void);

int x = 1;

main()
{
	int x = 5;

	printf("Local x in outer scope of main is %d\n", x);

	{
		int x = 7;
		printf("Local x in inner scoper of main is %d\n", x);
	}

	printf("Local x in outer scope of main is %d\n", x);

	a();
	b();
	c();
	a();
	b();
	c();

	printf("\nlocal x in main after exiting the funcitions %d", x);

	return 0;
}

void a(void)
{
	int x = 25;

	printf("\nLocal x in (a) is %d after entering (a)\n", x);
	x++;
	printf("Local x in (a) is %d before exiting (a)\n", x);
}

void b(void)
{
	static int x = 50;

	printf("\nLocal static x is %d on entering (b)\n", x);
	x++;
	printf("Local static x is %d on exiting (b)\n", x);
}

void c(void)
{
	printf("\nGlobal x is %d on entering (c)\n", x);
	x *=10;
	printf("Global x is %d on exiting c\n", x);
}
