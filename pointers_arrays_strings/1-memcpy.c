#include "main.h"

/**
 * *_memcpy- copies an area of memory
 * @dest: memory area to be copied
 * @src: memory area to be copied to
 * @n: bytes of memory to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
