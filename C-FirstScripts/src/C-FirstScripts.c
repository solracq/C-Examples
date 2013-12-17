/*
 ============================================================================
 Name        : C-FirstScripts.c
 Author      : Carlos Quiroz
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

main() {
	int a, b, c;
	int integer1, integer2, integer3, sum, avg;
	float average;
	int max, min, i;
	int array[6] = { 8, 6, 12, 3, 2, 1 };

	//setbuf(stdout, NULL);
	setvbuf(stdout, NULL, _IONBF, 0);

	puts("Welcome to C!\n"); /* prints !!!Hello World!!! */
	printf("Yuyis is very cute\n");

	printf("Enter \"first\" integer\n");
	scanf("%d", &a);
	printf("Enter \"second\" integer\n");
	scanf("%d", &b);
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	printf(
			"Enter two integers, and I will tell you the relationship they satisfy: ");
	scanf("%d%d", &integer1, &integer2);

	if (integer1 == integer2)
		printf("%d is equal to %d\n", integer1, integer2);
	if (integer1 != integer2)
		printf("%d is NOT equal to %d\n", integer1, integer2);
	if (integer1 > integer2)
		printf("%d is greater than %d\n", integer1, integer2);
	if (integer1 < integer2)
		printf("%d is less than %d\n", integer1, integer2);
	if (integer1 >= integer2)
		printf("%d is greater than or equal to %d\n", integer1, integer2);
	if (integer1 <= integer2)
		printf("%d is less than or equal to %d\n", integer1, integer2);

	printf("Input three different integers: ");
	scanf("%d%d%d", &integer1, &integer2, &integer3);

	sum = integer1 + integer2 + integer3;
	printf("Sum is : %d\n", sum);

	average = sum / 3;
	avg = (int) average; // Rounding a number to integer
	printf("Average is : %d\n", avg);

	printf("Product is : %d\n", integer1 * integer2 * integer3);

	max = integer1;
	if (max > integer2 && max > integer3) {
		max = integer1;
		if (integer2 < integer3)
			min = integer2;
		else
			min = integer3;
	}
	if (max > integer2 && max < integer3) {
		max = integer3;
		min = integer2;
	} else {
		max = integer2;
		if (integer1 < integer3)
			min = integer1;
		else
			min = integer3;
	}
	printf("The smallest is : %d\n", min);
	printf("The largest is : %d\n", max);

	//printf("Write six numbers: ");
	//scanf("%d%d%d%d%d%d",&integer1, &integer2, &integer3, &a, &b, &c);

	/*for (i = 0 ; i <= 5 ; i++)
	 {
	 printf("%d",array[i]);
	 while (i < 5)
	 printf(",");
	 }
	 printf("\n");*/

	max = array[0];
	min = array[0];
	for (i = 1; i <= 5; i++) {
		if (max < array[i]) {
			max = array[i];
		}
		if (min > array[i]) {
			min = array[i];
		}
	}
	printf("The new smallest is : %d\n", min);
	printf("The new largest is : %d\n", max);

	return 0;
}
