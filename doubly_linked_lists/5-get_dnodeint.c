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
		unsigned int count;

		count = 0;

		if (head->prev != NULL)
		{
			head = head->prev;
		}

		while (head->next != NULL)
		{
			if (count == index)
			{
				return (head);
			}
			head = head->next;
			count++;
		}
	}

	return (NULL);
}
