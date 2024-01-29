#include "main.h"

/**
 * print_diagonal- prints a diagonal line
 * @n: length of line
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	if (n != 0)
	{
	_putchar('\\');
	}
	_putchar('\n');
}
