/*
 * C-MilesPerGallonPerTank.c
 *
 *  Created on: Dec 9, 2013
 *      Author: Solrac
 */

#include <stdio.h>
#include <stdlib.h>

main()
{
	int suma=0;
	float miles, gallons;
	float resultados;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\nEnter the gallons used: ***-1 to quit*** ");
	scanf("%f", &gallons);

	while (gallons != -1)
	{
		printf("\nEnter the miles driven : ");
		scanf("%f", &miles);

		if (gallons == 0)
			printf("\nNo Zero allowed!");
		else
			resultados = miles / gallons;
		printf("\nThe miles / gallon for this tank was: %f", resultados);
		suma = suma + resultados;

		printf("\nEnter the gallons used: ***-1 to quit*** ");
		scanf("%f", &gallons);
	}
	printf("\nThe overall average miles/gallon was: %.2f", suma);

	return 0;
}
