#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end- adds a node to the end of a list
 * @head: pointer to the head of the list
 * @n: int to be added to list
 * 
 * Return: pointer to the new node 
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
    {
		return (NULL);
    }

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}

		current_node->next = new_node;
		new_node->prev = current_node;
	}

	return (new_node);
}
