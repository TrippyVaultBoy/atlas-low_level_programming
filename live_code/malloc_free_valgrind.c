#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *gnome;
	gnome = malloc(sizeof(int));

	if (gnome == NULL)
	{
		return (1);
	}

	*gnome = 1;

	printf("%d\n", *gnome);

	free(gnome);

	return (0);
}