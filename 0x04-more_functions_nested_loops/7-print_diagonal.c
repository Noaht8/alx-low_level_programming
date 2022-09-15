#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line
 * @n: input for how many diagonals printed
 * Return: void
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= a; b++)
		{
			if (a == b)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
		}
	}
}
