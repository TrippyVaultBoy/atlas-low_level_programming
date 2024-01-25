#include <stdio.h>
/**
 * main- entry point
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int i;
	char j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i + 0);

		for (j = 48; i <= 57; i++)
		{
			putchar(j + 0);
			putchar(',');
		}
	}
	return (0);
}
