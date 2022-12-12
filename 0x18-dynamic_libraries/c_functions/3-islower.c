#include "main.h"

/**
 *_islower - function to check if character is lowercase
 *@c: character input for function
 *Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
