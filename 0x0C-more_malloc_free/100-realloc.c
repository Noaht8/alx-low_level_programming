#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 * @ptr: The void Pointer to the Allocated memory
 * @old_size: The old size of the Allocated memory
 * @new_size: The new size of the Reallocated memory
 * Return: The Void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = (int *) malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		else
			return (ptr);
	}
	if (ptr == NULL)
	{
		return (ptr = (int *) malloc(new_size));
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
