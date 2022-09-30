#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the minimum number of
 * coins to make change for an amount of money
 * @argc: Argument Count
 * @argv: Array of Pointers to the Argument
 * Return: minimum number of coins, or 1;
 */
int main(int argc, char *argv[])
{
	int a, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	coin = 0;
	if (a > 25)
	{
		while (a >= 25)
			a -= 25, coin++;
	}
	if (a > 10 && a < 25)
	{
		while (a >= 10)
			a -= 10, coin++;
	}
	if (a > 5 && a < 10)
	{
		while (a >= 5)
			a -= 5, coin++;
	}
	if (a > 2 && a < 5)
	{
		while (a >= 2)
			a -= 2, coin++;
	}
	if (a == 1 || a == 2 || a == 5 || a == 10 || a == 25)
	{
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
