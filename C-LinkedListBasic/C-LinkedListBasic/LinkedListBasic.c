/*
 * Linkedlists.c
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

struct node {
	int data;
	struct node* next;
};

struct node * BuildOneTwoThree(void);
int Lenght(struct node *);

main()
{
	struct node *myList = BuildOneTwoThree();
	int nodeLenth;

	nodeLenth = Length(myList);
	printf("The length of the list is: %d", nodeLenth);

	return 0;
}

struct node *BuildOneTwoThree(void)
{
	struct node *head = NULL;
	struct node *second = NULL;
	struct node *third= NULL;
	struct node *newNode;

	head = malloc(sizeof(struct node));
	second = malloc(sizeof(struct node));
	third = malloc(sizeof(struct node));
	newNode = malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next= third;

	third->data = 3;
	third->next= NULL;

	newNode->data = 5;
	newNode->next = head;
	head = newNode; // newNode becomes the first node of the list

	return head;
}

int Length(struct node *head)
{
	int count = 0;
	struct node *current = head;

	while (current != NULL)
	{
		++count;
		current = current->next;
	}
	return count;
}
