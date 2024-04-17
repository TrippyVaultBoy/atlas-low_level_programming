#include "hash_tables.h"

/**
 *
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;

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
			if (current->next == NULL)
			{
				printf(", ");
			}
			printf("'%s': '%s', ", current->key, current->value);
			current = current->next;
		}
	}
	printf("}");
}