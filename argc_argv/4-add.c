#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main- adds positive numbers
 * @argc: number of arguments
 * @argv: arguments listed
 *
 * Return: if a non digit character is entered return 1
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	for (i = 1; (i < argc) != 0; i++)
	{
		if (isdigit(argv[i]) != 0)
		{
			printf("Error\n");
			return (1);
		}

		if (atoi(argv[i]) > 0)
		{
			sum = sum + atoi(argv[i]);
		}
	}
	
	printf("%d\n", sum);
	return (0);

}
