#include "hash_tables.h"

/**
 *
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int comma;

	comma = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (comma == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			comma = 1;
			current = current->next;
		}
	}
	printf("}\n");
}