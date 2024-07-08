#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
	{
		return;
	}

	while (temp)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
