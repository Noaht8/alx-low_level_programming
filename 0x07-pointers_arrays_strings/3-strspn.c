#include "main.h"
#include <stdio.h>

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The String Input
 * @accept: The characters to Find
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b = 0;
	unsigned int c;

	while (s[a])
	{
		for (c = 0; accept[c]; c++)
		{
			if (s[a] == accept[c])
			{
				b++;
			}
		}
		if (b < a)
		{
			break;
		}
		a++;
	}
	return (b);
}
