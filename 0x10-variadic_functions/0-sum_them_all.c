#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: The Number of Arguments (Excluding n)
 * Return: Sum of the Numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int a;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
