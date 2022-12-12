#include "main.h"
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @dest: Destination
 * @src: Memory Area
 * @n: Number of Bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
