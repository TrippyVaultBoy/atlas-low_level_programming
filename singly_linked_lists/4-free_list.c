#include "lists.h"

/**
 * free_list - frees all elements of a list
 * @head: head of the list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current)
	{
		current = head->next;
		free(head->str);
		free(head);
		head = current;
	}
}
