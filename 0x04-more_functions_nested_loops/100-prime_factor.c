#include <stdio.h>

/**
 * main - function to prints the largest prime factor
 * Return: void
 */
int main(void)
{
	long int n, d, maxF;

	n = 612852475143;
	d = 2;

	while (n != 0)
	{
		if (n % d != 0)
		{
			d = d + 1;
		}
		else
		{
			maxF = n;
			n = n / d;
			if (n == 1)
			{
				printf("%ld\n", maxF);
				break;
			}
		}
	}
	return (0);
}
