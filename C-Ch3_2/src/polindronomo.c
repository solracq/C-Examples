/*
 * polindronomo.c
 *
 *  Created on: Dec 10, 2013
 *      Author: Solrac
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main()
{
	int num;
	float u, d, c, m, M;
	float result=0;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Provide a number with 5 digits: ");
	scanf("%d",&num);

	u = num/10000;
	d = (num%10000) / 1000;
	c = (num%1000)/100;
	m = (num%100) / 10;
	M = (num%10) /1;

	printf("%du %dd %dc %dm %dM", (int)u, (int)d, (int)c, (int)m, (int)M);

	if ((int)u == M && (int)d == (int)m)
		printf("\nEs un palindronomo");
	else
		printf("\nNo es un plaindronomo");

	return 0;
}
