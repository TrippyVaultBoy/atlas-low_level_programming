#include "main.h"

/**
 * get_bit - gets the bit value at an index
 * @n: input number
 * @index: index of bit
 * Return: value of bit at the given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
