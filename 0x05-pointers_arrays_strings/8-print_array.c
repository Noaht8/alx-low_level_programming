#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: array to be printed
 * @n: number of elements of the array to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int c;

	if (n != 0 && n!= 1)
	{
		for (c = 0; c < n; c++)
		{
			if (c != (n - 1))
				printf("%d, ", a[c]);
			else if (c == (n - 1))
				printf("%d", a[c]);
		}
	}
	printf("\n");
}
