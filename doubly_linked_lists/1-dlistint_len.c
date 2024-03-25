#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len- determines number od elements in a d list
 * @h: pointer to head of the list
 *
 * Return: the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count;

	count = 0;

	if (h == NULL)
	{
		return (count);
	}

	while (temp->prev != NULL)
	{
		temp = temp->prev;
	}

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}
