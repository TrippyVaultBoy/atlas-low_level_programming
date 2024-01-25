#include <stdio.h>

/**
 * main- entry point
 *
 * Return: always 0 (Success)
 */

int  mainv(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
