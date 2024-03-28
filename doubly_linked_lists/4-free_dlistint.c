#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * freedlistint- frees a list
 * @head: pointer to head of the list
*/

void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		dlistint_t *current_node = head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
			free(current_node->prev);
		}

		free(current_node);
	}
}
