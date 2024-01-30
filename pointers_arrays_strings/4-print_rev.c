#include "main.h"

/**
 * print_rev- prints a string in reverse
 * @s: pointer to string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int length;
	int rev;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (rev = length - 1; rev >= 0; rev--)
	{
		_putchar(s[length]);
	}
	_putchar('\n');
}
