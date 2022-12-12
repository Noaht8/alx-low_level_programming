#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: String input
 * Return: converted integer
 */
int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int l = 0;
	int f = 0;
	int d = 0;

	while (s[l] != '\0')
		l++;
	while (a < l && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			d = s[a] - '0';
			if (b % 2)
				d = -d;
			c = c * 10 + d;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}
