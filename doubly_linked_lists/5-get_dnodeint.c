#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index- get the value of a node at a certain index
 * @head: pointer to the head of the list
 * @index: index of node to be returned
 *
 * Return: value at index
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head != NULL)
	{
		unsigned int count;

		count = 0;

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
