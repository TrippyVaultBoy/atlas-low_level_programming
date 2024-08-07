#include "main.h"

/**
 * puts_half- prints the second half of a string
 * @str: input string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int n;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if ((len % 2) == 0)
	{
		n = len / 2;
	}
	else if ((len % 2) != 0)
	{
		n = (len + 1) / 2;
	}

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
