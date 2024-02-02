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
	int j;
	int n;
	int pos;
	int neg;
	int firstdigit;
	int secdigit;

	pos = 0;
	neg = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+')
		{
			pos++;
		}
		if (s[i] == '-')
		{
			neg++;
		}
	}

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			firstdigit = j;
			break;
		}
	}

	for (n = j; s[n] != '\0'; n++)
	{
		if (s[n] <= '0' && s[n] >= '9')
		{
			secdigit = n;
			break;
		}
	}

	return (firstdigit);
}
