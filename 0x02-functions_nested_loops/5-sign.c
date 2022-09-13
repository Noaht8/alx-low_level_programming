#include "main.h"

/**
 * print_sign - function to identify sign of number
 * @n: input for function
 *
 * Return: 1 (> zero), 0 (equal to zero) and -1 (< zero)
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
