#include "main.h"

/**
 * *_strcat- appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the
 * end of dest, and then adds a terminating null byte
 * @dest: string to be appended to
 * @src: string to be appended
 *
 * Return: pointer to the string dest
 */

char *_strcat(char *dest, char *src)
{
	int destlen;
	int srclen;

	for (destlen = 0; dest[destlen] != '\0'; destlen++)
	{
	}

	for (srclen = 0; src[srclen] != '\0'; srclen++)
	{
		dest[destlen] = src[srclen];
		destlen++;
	}

	return (dest);
}
