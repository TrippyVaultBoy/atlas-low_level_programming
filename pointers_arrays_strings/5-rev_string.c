#include "main.h"

/**
 * rev_string- reverses a string
 * @s: pointer to string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int length;
	int i;
	char tmp;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	length = len - 1;

	for (i = 0; i < (len / 2); i++)
	{
		tmp = s[i];
		s[i] = s[length];
		s[length--] = tmp;
	}
}
