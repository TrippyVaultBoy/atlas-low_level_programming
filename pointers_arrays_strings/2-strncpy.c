#include "main.h"

/**
 * *_strncpy- copies a string
 * @dest: string to be copied to
 * @src: string to be copied
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int charcount;
	int i;

	charcount = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (charcount < n)
		{
			dest[i] = src[i];
			charcount++;
		}
	}

	return (dest);
}
