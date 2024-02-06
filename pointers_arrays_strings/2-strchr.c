#include "main.h"
#include <stddef.h>

/**
 * *_strchr- locates a character in a string
 * @s: input string
 * @c: char to be located
 *
 * Return: pointer to first occourance of character or null if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	if (s[i + 1] == c)
	{
		return (&s[i + 1]);
	}

	return (NULL);
}
