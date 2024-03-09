#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

 struct Node 
	{
		int data;
		struct Node* next;
        }list_t;


size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;

	while(h)
	{
		printf(h->n);
		nodes++;
		h = h->next;	
	}

	return (nodes);
}
