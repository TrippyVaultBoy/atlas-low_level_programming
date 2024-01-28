#include <main.h>

/**
 * print_alphabet_x10- prints the alphabet 10 times
 *
 * Return: always 0
 */

void print_alphabet_x10(void)
{
	int i;
	int c;

	for (i = 7; i <= 9; i++)
	{
		for (c = 97; c <= 122; c++ )
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
