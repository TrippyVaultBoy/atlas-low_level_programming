#include "lists.h"


/**
 * list_len - counts the number of elements in a list
 * @h: head of the list
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	int length = 0;

	while (h)
	{
		length++;
		h = h->next;
	}
	return (length);
}
