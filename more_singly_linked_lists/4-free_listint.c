#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
