#include "lists.h"

/**
 * get_nodeint_at_index - return the node at the index
 * @head: head of the list
 * @index: index of node to be retrieved
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	for (i = 0; i < index && temp; i++)
	{
		temp = temp->next;
	}

	return (temp);
}
