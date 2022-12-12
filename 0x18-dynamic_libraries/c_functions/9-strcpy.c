#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that copies the string pointed to by src
 * @dest: The array to be returned
 * @src: character input
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; 1; a++)
	{
		dest[a] = src[a];
		if (src[a] == 0)
		{
			break;
		}
	}
	return (dest);
}
