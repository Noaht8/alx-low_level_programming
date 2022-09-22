#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @c: input pointer string
 * Return: output c
 */
char *rot13(char *c)
{
	int a, b;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alpha13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (c[a] == alphabet[b])
			{
				c[a] = alpha13[b];
				break;
			}
		}
	}
	return (c);
}
