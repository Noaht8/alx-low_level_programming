#include "main.h"

/**
 * _strcmp - Compare Two Strings
 * @s1: First String
 * @s2: Second String
 * Return: 0 if s1 = s2
 * else another number
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (b == 0)
	{
		if ((*(s1 + a) == '\0') && (*(s2 + a) == '\0'))
		{
			break;
		}
		b = *(s1 + a) - *(s2 + a);
		a++;
	}
	return (b);
}
