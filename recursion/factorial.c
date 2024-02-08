#include <stdio.h>

int factorial (int n)
// recurive version
{
	if (n == 1) 
	{
		printf ("%d", n);
		return 1;
	}
	else
	{
		printf ("%d", n);
		return n*factorial(n-1);
	}
}

int main (void)
{
	int result;
	result = factorial (4);

	printf("%d", result);

	return (0);
}
