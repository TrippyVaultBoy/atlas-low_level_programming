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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[0] > 96 && str[0] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }

		if (str[i] == ',')
		{
			if (str[i + 1] > 96 && str[i] < 123)
			{
				str[i + 1] = str[i + 1] - 32; 
			}
		}
		else if (str[i] == ';')
		{
			if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
		}
		else if (str[i] == '.')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == '!')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == '?')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == '"')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == '(')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == ')')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == '{')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == '}')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == ' ')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == '\n')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }
		else if (str[i] == '\t')
                {
                        if (str[i + 1] > 96 && str[i] < 123)
                        {
                                str[i + 1] = str[i + 1] - 32;
                        }
                }


	}
	return (str);
}
