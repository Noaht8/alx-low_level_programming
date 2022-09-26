#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: Input String
 * @c: The character to locate
 * Return: c or NULL
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; 1; a++)
	{
		if (s[a] == c)
		{
			return ((s + a));
		}
		if (s[a] == 0)
		{
			break;
		}
	}
	return (NULL);
}
