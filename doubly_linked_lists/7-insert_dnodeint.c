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
	unsigned int i;
	new_node->n = n;

	i = 0;

	if (*h != NULL)
	{
		if (idx == 0)
		{
			new_node->next = *h;
			(*h)->prev = new_node;
			*h = new_node;
			return (new_node);
		}

		while (current_node != NULL && i < idx)
		{
			current_node = current_node->next;
			i++;
		}

		if (current_node == NULL)
		{
			free(new_node);
			return (NULL);
		}

		if (current_node->next)
		{
			current_node->next->prev = new_node;
		}
		new_node->next = current_node->next;
		new_node->prev = current_node;

		current_node->next = new_node;

		return (new_node);
	}
	else
	{
		*h = new_node;
		return (new_node);
	}
}
