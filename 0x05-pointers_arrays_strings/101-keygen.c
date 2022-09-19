#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program
 * Return: 0
 */
int main(void)
{
	int p[100];
	int a, s, b;

	s = 0;
	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		p[a] = rand() % 78;
		s += (p[a] + '0');
		putchar(p[a] + '0');
		if ((2772 - s) - '0' < 78)
		{
			b = 2772 - s - '0';
			s += b;
			putchar (b + '0');
			break;
		}
	}
	return (0);
}
