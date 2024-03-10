#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	list_t *temp;
	size_t elements;

	elements = 0;
	temp = head;

	while (temp != NULL) {
		elements++;
		temp = temp->next;
	}
}
