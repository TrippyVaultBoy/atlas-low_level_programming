#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_node = *h;
	unsigned int count;

	count = 0;

	if (new_node != NULL)
	{
		new_node->n = n;
		if (idx == 0)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
			new_node->prev = NULL;
			(*h) = new_node;
			return (new_node);
		}
		while (current_node->next != NULL)
		{
			if (count == idx)
			{
				new_node->next = current_node;
				new_node->prev = current_node->prev;
				if (current_node->prev != NULL)
				{
					current_node->prev->next = new_node;
				}
				current_node->prev = new_node;
				return (new_node);
			}
			current_node = current_node->next;
			count++;
		}
		if (count == idx)
		{
			new_node->next = NULL;
			new_node->prev = current_node;
			if (current_node != NULL)
			{
				current_node->next = new_node;
			}
			return (new_node);
		}
		free(new_node);
	}
	return (NULL);
}
