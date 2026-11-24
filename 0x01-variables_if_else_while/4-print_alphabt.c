#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: 0
*/
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' or a != 'e')
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');
	return (0);
}
