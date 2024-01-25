#include <stdio.h>

/**
 * main- entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;
	char x;

	for (i = 48; i < 58; i++)
	{
		putchar(i + 0);
	}

	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
