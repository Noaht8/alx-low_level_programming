#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the
 * arguments of your program
 * @ac: The Argument Count
 * @av: The pointer to the Argument
 * Return: Pointer to a New String, or NULL if it Fails
 */
char *argstostr(int ac, char **av)
{
	char *strDup;
	int i, j, k, size;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			size++;
		size++;
	}
	size++;
	strDup = malloc(sizeof(char) * size);
	if (strDup == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			strDup[k++] = av[i][j];
		strDup[k++] = '\n';
	}
	strDup[k] = '\0';
	return (strDup);
}
