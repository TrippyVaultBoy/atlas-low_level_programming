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

	for (i = 0; i < ht->size - 1; i++)
	{
		current = ht->array[i];
		printf("{");
		while (current != NULL)
		{
			printf("'%s': '%s', ", current->key, current->value);
			current = current->next;
		}
		printf("\'%s\': \'%s\'}\n", current);
	}
}