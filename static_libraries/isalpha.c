#include "main.h"

/**
 * _isalpha- checks for a alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if is a character 0 if no
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
