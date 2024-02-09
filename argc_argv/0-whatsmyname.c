#include "main.h"
#include <stdio.h>


void whatsmyname(int argcount, char *args[])
{
	if (argcount > 0)
	{
		printf("%s", args[0]);
		printf("\n");
	}
}

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
	whatsmyname(argc, argv);
	}
	return (0);
}
