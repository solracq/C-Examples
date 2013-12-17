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
	int grade;
	int aCount=0, bCount=0, cCount=0, dCount=0, eCount=0, fCount=0;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\nInput a valid grade (A,B,C,D,E,F)");
	printf("\nInput the EOF character to quit program\n");

	while ( ( grade = getchar() ) != EOF)
	{
		switch (grade)
		{
		case 'A': case 'a':
			aCount++;
			break;
		case 'B': case 'b':
			bCount++;
			break;
		case 'C': case 'c':
			cCount++;
			break;
		case 'D': case 'd':
			dCount++;
			break;
		case 'E': case 'e':
			eCount++;
			break;
		case 'F': case 'f':
			fCount++;
			break;
		case '\n' : case ' ':
			break;
		default:
			printf("\nWrong number!!!");
			printf("\nInput a valid grade (A,B,C,D,E,F)");
			break;
		}
	}

	printf("\nTotal of each grade");
	printf("\nA : %d",aCount);
	printf("\nB : %d",bCount);
	printf("\nC : %d",cCount);
	printf("\nD : %d",dCount);
	printf("\nE : %d",eCount);
	printf("\nF : %d",fCount);

	return 0;
}
