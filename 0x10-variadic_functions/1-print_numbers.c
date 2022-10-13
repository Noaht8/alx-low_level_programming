#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		if (a == (n - 1))
		{
			printf("%d", va_arg(args, int));
			break;
		}
		if (separator == NULL)
			printf("%d", va_arg(args, int));
		else
			printf("%d%s", va_arg(args, int), separator);
	}
	va_end(args);
	printf("\n");
}
