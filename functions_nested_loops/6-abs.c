#include "main.h"

/**
 * _abs- computed the absolute value of an int
 * @n: number to be checked
 *
 * Return: the absolute value
 */

int _abs(int n)
{
	char num[] = 'n';

	if (print_sign(n) == 1)
	{
		return (n);
	}
	else if (print_sign(n) == 0)
	{
		return (n * -1);
	}
}
