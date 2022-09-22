#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @c: input to be encoded
 * Return: Output String c
 */
char *leet(char *c)
{
	int a, b;
	char *i = "aAeEoOtTlL";
	char *j = "4433007711";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (c[a] == i[b])
			{
				c[a] = j[b];
			}
		}
	}
	return (c);
}
