#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	for (int i = 48; i <= 57; i++)
	{
		putchar(i + 0);

		for (int j = 48; i <= 57; i++)
		{
			putchar(j + 0);
			putchar(',');
		}
	}
	return (0);
}
