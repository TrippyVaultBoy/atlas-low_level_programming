#include "main.h"

/**
 * _pow_recursion- returns the value of x to the power of y
 * @x: number to be raised
 * @y: power which x is to be raised by
 *
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
