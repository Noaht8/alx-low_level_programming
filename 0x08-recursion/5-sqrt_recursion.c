#include "main.h"

int sqr_method(int n, int a);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: Input Number
 * Return: Square Root of input number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr_method(n, 0));
}

/**
 * sqr_method - Function that finds natural square root
 * @n: Input Number
 * @a: Itarator
 * Return: square root
 */
int sqr_method(int n, int a)
{
	if (a * a > n)
		return (-1);
	if (a * a == n)
		return (a);
	return (sqr_method(n, a + 1));
}
