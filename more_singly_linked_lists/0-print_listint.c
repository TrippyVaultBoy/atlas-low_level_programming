#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint- prints each element of a linked list
 * @h: pointer to the head node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
