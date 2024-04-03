#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index- insert a node at the index
 * @h: pointer to the head of the list
 * @idx: index of the list for the new node to be inserted
 * @n: value for new node to contain
 *
 * Return: pointer to the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current_next;
	dlistint_t *current_node = *h;

	unsigned int counter;
	new_node->n = n;
	counter = 0;

	while (counter <= idx && current_node->next != NULL)
	{
		current_node = current_node->next;
		counter++;
	}
	current_next = current_node->next;

	current_node->next = new_node;
	current_next->prev = new_node;

	new_node->prev = current_node;
	new_node->next = current_next;

	return (new_node);
}
