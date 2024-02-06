#include "main.h"

/**
 * _strspn- gets the length of a prefix substring
 * @s: input string
 * @accept: prefix substring
 *
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;
	unsigned int len;

	len = 0;
	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			count = 0;

			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}

		len = len + count;

		if (count == 0)
		{
			return (len);
		}
	}
	return (len);
}
