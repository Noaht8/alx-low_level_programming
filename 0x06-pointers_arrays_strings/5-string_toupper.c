#include "main.h"

/**
 * string_toupper - function to change from lower to upper
 * @c: Input Characters
 * Return: The pointer to the input
 */
char *string_toupper(char *c)
{
	int a = 0;

	while (*(c + a) != '\0')
	{
		if ((*(c + a) >= 97) && (*(c + a) <= 122))
		{
			*(c + a) = *(c + a) - 32;
		}
		a++;
	}
	return (c);
}
