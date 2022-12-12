#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that returns the length of a string
 * @s: Character pointer input
 *
 * Return: size
 */
int _strlen(char *s)
{
	int a;
	int size = 0;

	for (a = 0; 1; a++)
	{
		if (*(s + a) == 0)
			break;
		size++;
	}
	return (size);
}
