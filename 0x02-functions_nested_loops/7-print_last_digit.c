#include "main.h"

/**
 * print_last_digit - function that prints last digit of a number
 * @r: input for the function
 *
 * Return: v
 */
int print_last_digit(int r)
{
	int v;

	v = r % 10;

	if (v < 0)
	{
		v *= -1;
	}
	_putchar(v + '0');
	return (v);
}
