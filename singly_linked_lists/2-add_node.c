#include "lists.h"

/**
 * add_node - adds a new node to the start of a list
 * @head: head of the list
 * @str: string to be added
 * Return: head of new list 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int len = 0;

	while (str[len])
	{
		len++;
	}

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
