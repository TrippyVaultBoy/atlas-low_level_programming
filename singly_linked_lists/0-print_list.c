#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	int count;

	count = 0;

	while (temp != NULL) {
		if (temp->str == NULL) {
			printf("[0] (nil)");
		}
		else {
		count++;
		printf("%s\n", temp->str);
		temp = temp->next;
		}
	}
	return (count);
}
