#include "main.h"
#include <stdio.h>

/**
 * main- prints all argumants it recevies
 * @argc: number of argumants main recevies
 * @argv: pointer to names of all argumants 
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i <= argc; i++)
		{
			printf("%c", *argv[i]);
			printf("\n");
		}
		return (0);
	}
	else
	{
		return (0);
	}
}
