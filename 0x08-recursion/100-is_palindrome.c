#include "main.h"

int palindrome(char *s, int b);
int recursion(char *s);

/**
 * is_palindrome - function that checks if palindrome or not
 * @s: Input String
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int a = recursion(s);

	return (palindrome(s, a - 1));
}

/**
 * recursion - function that determine size
 * @s: pointer to the string input
 * Return: recursion
 */
int recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + recursion(s + 1));
}

/**
 * palindrome - palindrome checker
 * @s: input string pointer
 * @b: position
 * Return: True or False
 */

int palindrome(char *s, int b)
{
	if (b < 1)
		return (1);
	if (*s == *(s + b))
		return (palindrome(s + 1, b - 2));
	return (0);
}
