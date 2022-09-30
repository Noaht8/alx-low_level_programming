#include <stdio.h>
#include <stdlib.h>

/**
 * main - Funtion that multiplies to Integers
 * @argc: Argument Count
 * @argv: Array of pointers to the Argument
 * Return: multiplication result or 1
 */
int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc <= 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
