#include "main.h"

/**
* print_diagonal - draws a diagonal line
* @n: lenngth of line
*
* Return: void
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
