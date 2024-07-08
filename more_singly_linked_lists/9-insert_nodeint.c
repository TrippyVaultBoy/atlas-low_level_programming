#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at the index
 * @head: head of the list
 * @idx: index for new node
 * @n: data to be inserted
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	unsigned int i;

	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL || temp == NULL || *head == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; i < idx && temp; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
	}

	return (NULL);
}
