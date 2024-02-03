#include "main.h"

/**
 * reverse_array- reverses the content of an array
 * @a: input array
 * @n: number of elements in the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	n = n - 1;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n--]= tmp;
	}
}
