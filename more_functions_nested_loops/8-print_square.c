#include "main.h"

/**
 * print_square- prints a square
 * @size: size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int v;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (v = 1; v <= size; v++)
	{
		for (h = 1; h <= size; h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
