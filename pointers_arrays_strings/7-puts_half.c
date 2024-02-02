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

	for (len = 0; str[len] != '\0'; len++)
	{
	}

	for (n = (len) / 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
