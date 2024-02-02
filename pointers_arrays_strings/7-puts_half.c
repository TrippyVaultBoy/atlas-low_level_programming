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

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if ((len % 2) == 0)
	{
		len = len / 2;
	}
	else if ((len % 2) != 0)
	{
		len = (len - 1) / 2;
	}

	for (; str[len] != '\0'; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
