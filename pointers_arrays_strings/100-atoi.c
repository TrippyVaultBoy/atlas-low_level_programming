#include "main.h"

/**
 * _atoi- converts string to an integer
 * @s: input string
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int i;
	int pos;
	int neg;

	pos = 0;
	neg = 0;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
	{
		if (s[i] == '+')
		{
			pos++;
		}
		else if (s[i] == '-')
		{
			neg++;
		}
	}
	return (neg);
}
