#include "main.h"
#include <stdio.h>

/**
 * whatsmyname- print the full pathname of the function
 * @argcount: number of arguments
 * @args: list of all functions passed into main
 *
 * Return: void
 */

void whatsmyname(int argcount, char *args[])
{
	if (argcount > 0)
	{
		printf("%s", args[0]);
		printf("\n");
	}
}

/**
 * main- main function
 * @argc: number of arguments
 * @argv: list of arguments passied into main
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	whatsmyname(argc, argv);
	}
	return (0);
}
