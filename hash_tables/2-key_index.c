#include "hash_tables.h"

/**
 * key_index- gives the index of an input key
 * @key: value to ve hashed
 * @size: size of the hash table
 *
 * Return: index
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;
	unsigned long int index;

	hash = hash_djb2(key);

	index = hash % size;

	return (index);
}
