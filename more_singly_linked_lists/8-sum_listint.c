#include "lists.h"

/**
 * sum_listint - sums all data of a list
 * @head: head of list
 * Return: sum of all data in list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
