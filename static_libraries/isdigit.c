#include "main.h"

/**
 * _isdigit- checks for digits
 * @c: character to be checked
 *
 * Return: 1 if a digit 0 if not
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
