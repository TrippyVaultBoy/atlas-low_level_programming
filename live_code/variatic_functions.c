
int addNumbers(int first_num, ...);

int addNumbers(int first_num, ...);
{
	int sum = first num;

	va_list args;

	va_start (args, first_num);

	int next_num;

	while ((next_num = va_arg(args, int)) != 0)
	{
		sum += next_num;
	}

	va_end(args)

	return (sum);
}

int main()
{
	printf("\n%d",addNumbers(1, 2, 3, 4, 5) );
	
	return (0);
}
