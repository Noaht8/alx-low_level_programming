#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: Input String to Duplicate
 * Return: pointer to the Duplicated String
 */
char *_strdup(char *str)
{
	char *a;
	int i, b;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	a = malloc(i * sizeof(*a) + 1);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < i; b++)
		a[b] = str[b];
	a[b] = '\0';

	return (a);
}
