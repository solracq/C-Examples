/*
 * Cards.c
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
#define SIZE 52

struct card{
	char *face;
	char *suit;
};

typedef struct card Card;

void fillDeck(Card *, char *[], char *[]);
void shuffle(Card *);
void deal(Card *);

main()
{
	Card deck[SIZE];
	char *face[] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
	char *suit[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

	srand(time(NULL));

	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);

	return 0;
}

void fillDeck(Card *wdeck, char *wface[], char *wsuit[])
{
	int i;

	for (i = 0 ; i <= SIZE-1 ; i++)
	{
		wdeck[i].face = wface[i % 13];
		wdeck[i].suit = wsuit[i / 13];
	}
}

void shuffle(Card *wdeck)
{
	int i, j;
	Card temp;

	for (i = 0 ; i <= SIZE-1 ; i++)
	{
		j = rand() % 52;
		temp = wdeck[i];
		wdeck[i] = wdeck[j];
		wdeck[j] = temp;
	}
}

void deal(Card *wdeck)
{
	int i;

	for (i = 0 ; i <= SIZE-1 ; i++)
		printf("5s of %-8s%c", wdeck[i].face, wdeck[i].suit, (i+1) % 2 ? '\t' : '\n');
}
