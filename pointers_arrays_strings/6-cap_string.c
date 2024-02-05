#include "main.h"

/**
 * *cap_string- capitalizes all words in a string
 * @str: input string
 *
 * Return pointer to string
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[0] > 96 && str[0] < 123)
	{
		str[0] = str[0] - 32;
	}
	for (; str[i] != '\0'; i++)
	{
		switch (str[i])
		{
			case' ':
			case'\t':
			case'\n':
			case',':
			case';':
			case'.':
			case'!':
			case'?':
			case'"':
			case'(':
			case')':
			case'{':
			case'}':
				if (str[i + 1] > 96 && str[i + 1] < 123)
				{
					str[i + 1] = str[i + 1] - 32;
				}
		}
	}
	return (str);
}
