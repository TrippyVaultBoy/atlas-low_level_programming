#include "lists.h"

/**
 * add_node_end - adds a node to the end of a list
 * @head: head of the list
 * @str: string to be added
 * Return: pointer to new node or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current = *head;
	int len = 0;

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[len])
		len++;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (current->next)
	{
		current = current->next;
	}

	current->next = new_node;

	return (new_node);
}
