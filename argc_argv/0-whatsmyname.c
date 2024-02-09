#include "main.h"
#include <stdio.h>


void whatsmyname(int argc, char *argv[])
{
	if (argc > 0)
	{
	printf("%s", argv[0]);
	printf("\n");
	}
}
