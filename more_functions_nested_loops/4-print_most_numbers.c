#include "main.h"

/**
 * print_most_numbers- prints 0-9 execpt for 2 and 4
 *
 * Return: 0 always
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
