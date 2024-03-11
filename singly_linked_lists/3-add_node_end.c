#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *add_node_end- adds a node to the end of a linked list
 * @head: points to the head of a list
 * @str: string to write into node
 *
 * Return: address of the new elements or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *now;
	list_t *newNode;
	int len;

	now = *head;

	while (*str != '\0')
	{
		str++;
		len++;
	}

	str = str - len;

	while(now != NULL && now->next != NULL)
	{
		now = now->next;
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = len;
	newNode->next = NULL;

	return (newNode);
}
