#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: binary number
 * Return: converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '1' && *b != '0')
			return (0);

		result = ((result << 1) | (*b - '0'));
		b++;
	}

	return (result);
}
