#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: concatenate string pointer
 * @src: Appends to the first input pointer
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b = 0;
	int c = 0;
	int d = 0;

	for (a = 0; dest[a] != 0; a++)
	{
		b++;
	}
	for (a = 0; src[a] != 0; a++)
	{
		c++;
	}
	for (a = b; src[d] != 0; a++)
	{
		dest[a] = src[d];
		d++;
	}
	return (dest);
}
