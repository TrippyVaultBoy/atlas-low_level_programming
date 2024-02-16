#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array- creates an array of a speceic char
 * @size: size of array
 * @c: char to initialize the array with
 *
 * Return: pointer to array or NULL if size equals 0
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = (char*)malloc(size * 4);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		return (array);
	}
}
