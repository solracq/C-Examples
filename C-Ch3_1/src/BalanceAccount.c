#include <stdio.h>
#include <stdlib.h>

main()
{
	float finalBalance=0;
	int cta;
	float balance, charges, credits, credlim;

	setvbuf(stdout, NULL, _IONBF, 0);

	printf("\nEnter Account Number @@@-1 to quit@@@ : ");
	scanf("%d", &cta);


	while (cta != -1)
	{
		printf("\nEnter Initial balance of the month : ");
		scanf("%f", &balance);
		printf("\nEnter total charges : ");
		scanf("%f", &charges);
		printf("\nEnter total credits : ");
		scanf("%f", &credits);
		printf("\nEnter credit limit : ");
		scanf("%f", &credlim);

		printf("**** BANK INFORMATION ****");
		printf("\nAccount Number : %d", cta);
		printf("\nCredit Limit : %.2f", credlim);
		finalBalance = balance + charges - credits;
		printf("\nFinal Balance : %.2f", finalBalance);
		if (finalBalance > credlim)
			printf("\nCredit Limit Exceeded!");

		printf("\n");
		printf("\nEnter Account Number @@@-1 to quit@@@ : ");
		scanf("%d", &cta);
	}

	return 0;
}
