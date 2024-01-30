#include "main.h"

/**
 * print_rev- prints a string in reverse
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len;
        len = _strlen(*s);

	*s = *s + len;

	while (*s != '\n')
	{
		_putchar(*s);
		*s--;
	}
	_putchar('\n');
}
