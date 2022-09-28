#include "main.h"

int prime(int n, int a);

/**
 * is_prime_number - function that checks if prime or not
 * @n: input number
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - function that checks if prime or not using recursion
 * @n: input Number
 * @a: Iterator for the function
 * Return: 1 if prime, 0 if not
 */
int prime(int n, int a)
{
	if (a == 1)
		return (1);
	if (n % a == 0 && a > 0)
		return (0);
	return (prime(n, a - 1));
}
