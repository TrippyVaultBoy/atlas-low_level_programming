#include "main.h"
#include <stdlib.h>

/**
 * *str_concat- concatinates two strings
 * @*s1: first string
 * @*s2: second string
 *
 * Return: pointer to new string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *string;
	int len1;
	int len2;
	int i;
	int j;

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
	}

	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
	}
	string = (char *)malloc(len1 + len2 + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		string[i] = s1[i];
	}
	for (j = i; j < len2; j++)
	{
		string[j] == s2[j];
	}
	return (string);	
}
