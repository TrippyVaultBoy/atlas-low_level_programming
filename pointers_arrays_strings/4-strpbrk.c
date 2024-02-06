#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk- searches a string for any set of bytes
 * @s: input string
 * @accept: set of bytes
 *
 * Return: pointer to matching byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
