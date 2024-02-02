#include "main.h"

/**
 * *_strncat- concatenates two strings 
 * and uses at most n bytes from src
 * @dest: concatinated string
 * @src: string to be added
 * @n: number of bytes to be used
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen;
	int srclen;
	int charcount;

	charcount = 0;

	for (destlen = 0; dest[destlen] != '\0'; destlen++)
	{
	}

	for (srclen = 0; src[srclen] != '\0'; srclen++)
	{	
		if (charcount < n)
		{
			dest[destlen] = src[srclen];
			destlen++;
			charcount++;
		}
	}

	return (dest);	
}
