#include "main.h"

/**
 * _isupper - checks if uppercase character
 * @c: input to be checked
 * Return: 1 if uppercase.
 * if not 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
