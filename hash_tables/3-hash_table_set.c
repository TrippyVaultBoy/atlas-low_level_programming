#include "hash_tables.h"

/**
 * hash_table_set- adds or updates an element of the hash table
 * @ht: pointer to the head node of the hash table
 * @key: key of the new node
 * @value: value of the new node
 *
 * Return: pointer to the new_node
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (key == NULL)
	{
		return (0);
	}

	index = key_index(key, ht->size);

	hash_node_t *current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}

	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}