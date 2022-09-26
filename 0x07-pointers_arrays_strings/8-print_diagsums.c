#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: The 2d Array
 * @size: 2d size of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int b;
	int c = 0, d = 0;
	int s = size * size;

	for (b = 0; b < s; b += size + 1)
	{
		c += a[b];
	}
	for (b = size - 1; b < s - 1; b += size - 1)
	{
		d += a[b];
	}
	printf("%d, %d\n", c, d);
}
