#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node- add a node at the beginning of a list
 * @head: pointer to head of the list
 * @str: string to put inside node
 *
 * Return: the address of new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int len;

	len = 0;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(*str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = len;
	newNode->next = *head;
	*head = newNode;

	return (*head);
}
