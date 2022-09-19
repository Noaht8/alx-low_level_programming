#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: input character pointer
 * Return: void
 */
void puts_half(char *str)
{
	int a;
	int b = 0;

	for (a = 0; 1; a++)
	{
		if (str[a] == 0)
		{
			break;
		}
		b++;
	}
	if (b % 2 == 0)
	{
		for (a = b / 2; a < b; a++)
		{
			printf("%c", str[a]);
		}
		printf("\n");
	}
	else if (b % 2 != 0)
	{
		for (a = (b + 1) / 2; a < b; a++)
		{
			printf("%c", str[a]);
		}
		printf("\n");
	}
}
