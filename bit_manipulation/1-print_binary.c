#include "main.h"

/**
 * print_binary - prints the binary of an int
 * @n: input int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) ? '1' : '0');
}
