#include "main.h"
#include <stdio.h>

/**
 * swap_int - function that swaps the values of two integers
 * @a: First Integer Pointer
 * @b: Second Integer Pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
