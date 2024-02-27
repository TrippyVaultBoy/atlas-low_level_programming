#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * void array_iterator- executes a function with a given array
 * @array: arfay to beterated through
 * @size: size of the array
 * @action: function to be exicuted
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t len;

	for (len = 0; len < size; len++)
	{
		action(array[len]);
	}
}
