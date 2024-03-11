#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint- add a node at the beginning of a list
 * @head: pointer to head of the list
 * @n: number to put inside node
 *
 * Return: the address of new element or NULL
 */

list_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = strdup(n);

	if (newNode->n == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;

	return (*head);
}
