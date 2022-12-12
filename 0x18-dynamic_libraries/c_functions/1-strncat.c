#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings
 * @dest: The Pointer
 * @src: Input Characters
 * @n: Amount of Bytes src uses
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (b < n)
	{
		*(dest + a) = *(src + b);
		if (*(src + b) == '\0')
		{
			break;
		}
		a++;
		b++;
	}
	return (dest);
}
