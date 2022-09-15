#include "main.h"

/**
 * _isdigit - function to check if digit
 * @c: input character
 * Return: 1 if character
 * else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
