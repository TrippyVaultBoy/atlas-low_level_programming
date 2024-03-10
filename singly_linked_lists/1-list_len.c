#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len- returns the number of elemnts in the list
 * @h: pointer to head of the list
 *
 * Return: elements
 */

size_t list_len(const list_t *h)
{
	int elements;

	elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
