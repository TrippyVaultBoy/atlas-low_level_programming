#include "main.h"
#include <stdlib.h>

/**
 * _strlen- finds the length of a string
 * @string: input string
 *
 * Return: len
 */

int _strlen(char *string)
{
	int len;

	for (len = 0; string[len] != '\0'; len++)
	{
	}

	return (len);
}

/**
 * *str_concat- concatinates two strings
 * @s1: first string
 * @s2: second string
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
	
	len1 = _strlen(s1);
	len2 = _strlen(s2);

	string = (char *)malloc(len1 + len2 + 1);
	if (string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		string[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		string[i] = s2[j];
		i++;
	}
	string[i++] = '\0';
	return (string);	
}
