/*
 * C-MilesPerGallonPerTank.c
 *
 *  Created on: Dec 9, 2013
 *      Author: Solrac
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main()
{
	int n=1;
	float p, r, a;
	float gain = 0 , total = 0;

	setvbuf(stdout, NULL, _IONBF, 0);

	for (n=1 ; n <= 10 ; n++)
	{
		printf("\n**** Bank Balance for the %d year ****", n);
		p = 1000; // Investment
		r = 0.05; // 5% interest
		gain = p*r; // Gain
		a = p * pow(( 1 + r ),n); // Investment gain per year
		printf("\nInvestment : $ %.2f", p);
		printf("\nInterest this year : %.2f %", r);
		printf("\nGain : $ %.2f", gain);
		printf("\nAccumulative Gain per year : $ %.2f", a);
		total += a;
		printf("\n");
	}

	printf("\nTotal Accumulative Gain for the 10 year period : $ %.2f", total);

	printf("\n%5s%10s%20s\n","Testing","Tabulation","with Strings");

	return 0;
}
