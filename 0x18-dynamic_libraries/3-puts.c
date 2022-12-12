#include "main.h"
#include <stdio.h>

/**
 * _puts - function that prints a string
 * @str: input pointer character
 *
 * Return: void
 */
void _puts(char *str)
{
	int a;

	for (a = 0; 1; a++)
	{
		if (*(str + a) == 0)
		{
			printf("\n");
			break;
		}
		printf("%c", *(str + a));
	}
}
