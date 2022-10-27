#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function that converts a binary number
 * to an unsigned int
 * @b: Binary Input
 *
 * Return: Unsigned Int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int v = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		v <<= 1;
		v += b[i] - '0';
		i++;
	}
	return (v);
}
