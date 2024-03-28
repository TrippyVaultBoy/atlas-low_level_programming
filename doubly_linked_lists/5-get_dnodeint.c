#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head != NULL)
	{
		dlistint_t *current_node = head;
		unsigned int count;

		count = 0;

		if (head->prev != NULL)
		{
			head = head->prev;
		}

		while (current_node->next != NULL)
		{
			if (count == index)
			{
				return (current_node);
			}
			current_node = current_node->next;
			count++;
		}
	}

	return (NULL);
}
