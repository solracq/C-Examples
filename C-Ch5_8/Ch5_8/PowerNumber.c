/*
 * ParkingRates.c
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

float CalculateCharges(float);

main()
{
	int i;
	float cargos1, cargos2, cargos3, horas1, horas2, horas3, totalCharges=0, totalHours=0;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("Parking hours for car no. 1 ? \n");
	scanf("%f", &horas1);
	printf("Parking hours for car no. 2 ? \n");
	scanf("%f", &horas2);
	printf("Parking hours for car no. 3 ? \n");
	scanf("%f", &horas3);

	cargos1 = CalculateCharges(horas1);
	cargos2 = CalculateCharges(horas2);
	cargos3 = CalculateCharges(horas3);

	totalCharges = cargos1 + cargos2 + cargos3;
	totalHours = horas1 + horas2 + horas3;

	printf("%10s%15s%20s","Car No.", "Hours","Charge\n");
	printf("%10s%15.1f%20.2f\n", "1", horas1, cargos1);
	printf("%10s%15.1f%20.2f\n", "2", horas2, cargos2);
	printf("%10s%15.1f%20.2f\n", "3", horas3, cargos3);
	printf("%10s%15.1f%20.2f\n", "Total", totalHours, totalCharges);

	return 0;
}

float CalculateCharges(float hrs)
{
	float charges = 0;

	if (hrs > 0 && hrs <= 3)
		charges += 1;
	else if (hrs > 3 && hrs < 24 )
		charges += 1 + (hrs - 3) * 0.5;
	else if (hrs >= 24)
		charges += ( hrs / 24 ) * 10;

	return charges;
}
