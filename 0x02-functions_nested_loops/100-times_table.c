#include "main.h"

/**
 * print_times_table - function to print times table
 * @n: input value for the function
 */
void print_times_table(int n)
{
	int a = 0, b, c;

	if (n < 0 || n > 15)
	{
		return;
	}
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c > 99)
			{
				_putchar(c / 100 + '0');
				_putchar((c / 10 % 10) + '0');
				_putchar(c % 10 + '0');
			}
			else if (c > 9)
			{
				_putchar(' ');
				_putchar(c / 10 + '0');
				_putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(c + '0');
			}
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
