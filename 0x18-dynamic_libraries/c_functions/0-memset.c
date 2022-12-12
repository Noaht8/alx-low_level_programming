#include "main.h"
#include <stdio.h>

/**
 * _memset - Function that fills memory area with constant byte
 * @s: Memory Area Pointer
 * @b: Constant Byte
 * @n: Number of Bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
