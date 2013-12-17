/*
 * CopyingArrysPointers.c
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

main()
{
	struct Card{
		char *face;
		char *suit;
	};

	struct Card a;
	struct Card *aPtr;

	aPtr = &a;

	a.face = "Ace";
	a.suit = "Spades";

	printf("%s%s%s",a.face," of ", a.suit);
	printf("\n");
	printf("%s%s%s",aPtr->face," of ", aPtr->suit);
	printf("\n");
	printf("%s%s%s",(*aPtr).face," of ", (*aPtr).suit);

	return 0;
}
