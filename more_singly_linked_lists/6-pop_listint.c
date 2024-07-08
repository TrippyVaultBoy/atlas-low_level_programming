#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: head of list
 * Return: data of deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL || *head == NULL)
		return (0);

	data = (*head)->n;

	temp = (*head)->next;
	free(*head);
	(*head) = temp;

	return (data);
}
