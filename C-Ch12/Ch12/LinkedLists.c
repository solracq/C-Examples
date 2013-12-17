/*
 * LinkedLists.c
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
  int x;
  struct node *next;
};

int main()
{
    /* This will be the unchanging first node */
    struct node *root;

    // This will point to each node as it traverses the list
    struct node *conductor;

    /* Now root points to a node struct */
    root = malloc( sizeof(struct node) );

    /* The node root points to its next pointer equal to a null pointer
       set */
    root->next = 0;
    /* By using the -> operator, you can modify what the node,
       a pointer, (root in this case) points to. */
    root->x = 12;

    // if the root's pointer to the next node is pointing to something,
    // the "conductor" will be set to point to the next node. In this fashion,
    // the list can be traversed.
    conductor = root;
    	if ( conductor != 0 ) { /* Makes sure there is a place to start */
            while ( conductor->next != 0)
            {
            	//access the node pointed to by conductor
            	printf( "%d\n", conductor->x );
            	// The conductor changes what it points to by getting
            	//the address of conductor->next.
                conductor = conductor->next;
            }
            printf( "%d\n", conductor->x );
        }
    /* Creates a node at the end of the list */
    conductor->next = malloc( sizeof(struct node) );

    conductor = conductor->next;

    if ( conductor == 0 )
    {
    	printf( "Out of memory" );
        return 0;
    }
    /* initialize the new memory */
    conductor->next = 0;
    conductor->x = 42;

    return 0;
}
