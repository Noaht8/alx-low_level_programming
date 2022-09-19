#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character
 * @str: Input Character Pointer
 * Return: void
 */
void puts2(char *str)
{
	int a;

	for (a = 0; 1; a++)
	{
		if (*(str + a) == 0)
		{
			printf("\n");
			break;
		}
		if (a % 2 == 0)
		{
			printf("%c", *(str + a));
		}
	}
}
