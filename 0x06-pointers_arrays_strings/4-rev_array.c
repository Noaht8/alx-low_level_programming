#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: Input Array
 * @n: the number of elements of the array
 * Return: Void
 */
void reverse_array(int *a, int n)
{
	int a1, b, t;

	for (a1 = 0; a1 < n - 1; a1++)
	{
		for (b = a1 + 1; b > 0; b--)
		{
			t = *(a + b);
			*(a + b) = *(a + (b - 1));
			*(a + (b - 1)) = t;
		}
	}
}
