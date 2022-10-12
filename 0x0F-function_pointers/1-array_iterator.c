#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that executes a function
 * given as a parameter on each element of an array
 * @array: Input Array
 * @size: Size of the Array
 * @action: The action to be performed on each array element
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
