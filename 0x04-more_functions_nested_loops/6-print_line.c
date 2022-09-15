#include "main.h"

/**
 * print_line - function that prints line
 * @n: input for how many time the line is printed
 * Return: void
 */
void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n <= 0)
		{
			continue;
		}
		_putchar('_');
	}
	_putchar('\n');
}
