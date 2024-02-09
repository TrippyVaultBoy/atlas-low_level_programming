#include "main.h"

/**
 * square_root- another function which calculated the square root 
 * @val: number to determine the square root of
 * @counter: iterate from this number
 *
 * Return: the square root of val
 */

int square_root(int val, int counter)
{
	if (counter * counter == val)
	{
		return (counter);
	}
	else if (counter * counter > val)
	{
		return (-1);
	}
	else
	{
		return (square_root(val, counter + 1));
	}
}

/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: input number
 *
 * Return: the natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (square_root(n, 0));
}
