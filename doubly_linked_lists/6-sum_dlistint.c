#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint- return the sum of all data in the list
 * @head: pointer to the head of the list
 *
 * Return: sum of data in the list or 0 if empty
*/

int sum_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		int sum;

		sum = 0;

		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}

		return (sum);
	}
	else
	{
		return (0);
	}
}
