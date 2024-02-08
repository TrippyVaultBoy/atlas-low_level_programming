#include "main.h"

/**
 * factoral- return the factorial of a given number
 * @n: input number
 *
 * Return: factorial of n
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
