#include <stdio.h>
#include "main.h"

/**
 * print_array- print n number of elements of an array
 * @n: number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}

		printf("%d, ",a[i]);
	}
	printf("\n");
}
