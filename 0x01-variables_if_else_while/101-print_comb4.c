#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 56; i++)
	{
		for (j = i + 1; j < 57; j++)
		{
			for (k = i + 2; k < 58; k++)
			{
			if (i != j && j != k && i != k)
			{
			putchar(i);
			putchar(j);
			putchar(k);
			if (i == 55 && j == 56 && k == 57)
				break;
			putchar(',');
			putchar(' ');
			}

			}
		}
	}
	putchar('\n');
	return (0);

}
