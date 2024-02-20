#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked- allocates memory
 * @b: size of memory to designate
 *
 * Return: pointer to memory allocated
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}

	return (mem);
}
