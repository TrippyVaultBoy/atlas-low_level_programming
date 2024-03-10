#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list- prints each element of a linked list
 * @h: pointer to the head node
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			count++;
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (count);
}
