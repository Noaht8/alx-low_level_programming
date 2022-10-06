#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: Number of the Array Elements
 * @size: Size of the Array
 * Return: Void Pointer to the Allocated Memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		a[i] = 0;
	return (a);
}
