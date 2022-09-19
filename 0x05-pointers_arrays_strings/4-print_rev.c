#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse
 * @s: Input string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a, b;
	int c = 0;

	for (a = 0; 1; a++)
	{
		if (s[a] == 0)
		{
			break;
		}
		c++;
	}
	for (b = c - 1; b >= 0; b--)
	{
		printf("%c", s[b]);
	}
	printf("\n");
}
