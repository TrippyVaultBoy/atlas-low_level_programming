#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen- finds the length of a string
 * @string: input string
 * @n: number of elements to be returned
 *
 * Return: len
 */

int _strlen(char *string, unsigned int n)
{
	int len;

	if (n == 0)
	{
		 for (len = 0; string[len] != '\0'; len++)
        	{
        	}

        	return (len);
	}
	else
	{
		for (len = 0; string[len] != '\0' && string[len] < n; len++)
		{
		}

		return (len);
	}
}

/**
 * *string_nconcat- concatinated two strings
 * @*s1: first string
 * @*s2: second string
 * @n: concat the first n of s2
 *
 * Return: pointer to to string or NULL if failure
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	int len1;
	int len2;
	int i;
	int j;
	
	len1 = _strlen(s1, 0);
	len2 = _strlen(s2, n);

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
