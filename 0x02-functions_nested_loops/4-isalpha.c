#include "main.h"

/**
 * _isalpha - function to identify if alphabet or not
 * @c: character input for function
 *
 * Return: 1 if alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
