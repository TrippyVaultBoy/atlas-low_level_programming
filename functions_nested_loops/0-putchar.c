#include "main.h"

/**
 * main- prints _putchar
 *
 * Return: always 0 (Success)
 */

int main (void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 1; i <= 7; i++ )
	{
		putchar(ch[i]);
	}
	putchar("\n");
	return (0);
}
