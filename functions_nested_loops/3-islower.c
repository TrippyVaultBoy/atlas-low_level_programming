#include "main.h"

/**
 * _islower- checks for a lowercase character
 *
 * Return: 1 if lowercase 0 if not
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
