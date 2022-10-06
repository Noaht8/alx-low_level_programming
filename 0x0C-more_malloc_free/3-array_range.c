#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: First element of the Array
 * @max: Last element of the Array
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, l;
	int *a;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	a = malloc(sizeof(int) * l);
	if (a == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		a[i - min] = i;
	return (a);
}
