#include "main.h"
#include <stdlib.h>

/**
 * _strdup- copies a string
 * @str: input string
 *
 * Return: pointer to string copy NULL if insuffucient memory
 */

char *_strdup(char *str)
{
	int i;
	int j;
	char *array;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	array = (char *)malloc(i + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		array[j] = str[j];
	}

	return (array);
}
