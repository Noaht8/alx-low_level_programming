#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet 10x
 */
void print_alphabet_x10(void)
{
	char c, d;

	for (c = 0; c < 10; c++)
	{
		for (d = 'a'; d <= 'z'; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
