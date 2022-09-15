#include <stdio.h>

/**
 * main - function to prints the largest prime factor
 * Return: void
 */
int main(void)
{
	long int n;

	n = 612852475143;

	long int d = 2;
	long int a = 2;
	long int maxFact;

	while (n != 0)
	{
		if (n % d != 0)
		{
			d += 1;
		}
		else
		{
			maxF = n;
			n = n / d;
			if (n == 1)
			{
				printf("%d\n", maxF);
				a = 1;
				break;
			}
		}
	}
	return (0);
}
