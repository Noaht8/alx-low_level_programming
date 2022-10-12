#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: Input Array
 * @size: Size of the Array
 * @cmp: Pointer to the function used to compare values
 * Return: index of the first element for which
 * the cmp function does not return 0
 * If no element matches, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	int ch = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		ch = cmp(array[a]);
		if (ch != 0)
			return (a);
	}
	return (-1);
}
