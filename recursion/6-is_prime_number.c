#include "main.h"

/**
 * prime_num- checks if a number is a prime number
 * @num: value to be checked
 * @count: iterates from 2 to num / 2
 *
 * Return: 1 if yes, 0 if no
 */

int prime_num(int num, int count)
{
	if (num % count == 0)
	{
		return (0);
	}
	else if (count >= num / 2)
	{
		return (1);
	}
	else
	{
		return (prime_num(num, count + 1));
	}
}

/**
 * is_prime_number- checks is a number is a prime number recursively
 * @n: number to be checked
 *
 * Return: 1 is yes, 0 if no
 */

int is_prime_number(int n)
{
	if (n == 0 || n == 1 || n < 0)
	{
		return (0);
	}
	else
	{
		return (prime_num(n, 2));
	}
}
