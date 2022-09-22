#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @c: A Input Pointer
 * Return: c
 */
char *cap_string(char *c)
{
	int a;

	for (a = 0; c[a] != 0; a++)
	{
		if (a == 0 && c[a] >= 97 && c[a] <= 122)
		{
			c[a] = c[a] - 32;
		}
		if (c[a + 1] >= 97 && c[a + 1] <= 122)
		{
			if (c[a] == ' ' || c[a] == '\n' || c[a] == ',' || c[a] == ';' ||
					c[a] == '.' || c[a] == '!' || c[a] == '?' ||
					c[a] == '"' || c[a] == '(' || c[a] == ')' || c[a] == '{' || c[a] == '}')
			{
				c[a + 1] = c[a + 1] - 32;
			}
			if (c[a] == '\t')
			{
				c[a + 1] = c[a + 1] - 32;
			}
		}
	}
	return (c);
}
