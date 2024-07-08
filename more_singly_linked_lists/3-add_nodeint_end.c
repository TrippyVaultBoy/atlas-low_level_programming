#include "lists.h"
/**
 * add_nodeint_end - adds node to the end of a list
 * @head: head of the list
 * @n: number to be added
 * Return: poineter to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;
	return (new_node);
}
