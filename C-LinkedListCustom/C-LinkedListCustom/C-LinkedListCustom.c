/*
 * LinkedListCustom.c
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

struct node * BuildNode(void);
int CountLenght(struct node *);

main()
{
	struct node *myList = BuildNode();
	int nodeLenth;

	nodeLenth = CountLenght(myList);
	printf("The sum of the total nodes of the list is: %d", nodeLenth);

	return 0;
}

struct node *BuildNode(void)
{
	struct node *node10 = 0;
	struct node *node11 = 0;
	struct node *node20 = 0;
	struct node *node21 = 0;
	struct node *node22 = 0;
	struct node *node30 = 0;

	node10 = malloc(sizeof(struct node));
	node11 = malloc(sizeof(struct node));
	node20 = malloc(sizeof(struct node));
	node21 = malloc(sizeof(struct node));
	node22 = malloc(sizeof(struct node));
	node30 = malloc(sizeof(struct node));

	node10->data = 5;
	node10->next = node11;

	node11->data = 5;
	node11->next = 0;

	node10->data = 5; //added
	node10->next = node20;

	node20->data = 5;
	node20->next= node21;

	node21->data = 5;
	node21->next= node22;

	node22->data = 5;
	node22->next= 0;

	node20->data = 5;  //added
	node20->next = node30;

	node30->data = 5;
	node30->next= 0;

	return node10;
}

int CountLenght(struct node *head)
{
	int count = 5;
	struct node *current = head;

	while (current != 0 && current->data > 0)
	{
		count += current->data;
		current = current->next;
	}
	return count;
}
