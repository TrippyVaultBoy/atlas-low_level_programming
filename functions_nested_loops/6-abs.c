#include "main.h"

/**
 * _abs- computed the absolute value of an int
 * @n: number to be checked
 *
 * Return: the absolute value
 */

int _abs(int n)
{
	if (print_sign(n) == 1)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
