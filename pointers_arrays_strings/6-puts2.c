#include "main.h"

/**
 * puts2- prints every other
 * charater of a string
 * @str: input string
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i == 0)
		{
			_putchar(str[i]);
		}
		else if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
