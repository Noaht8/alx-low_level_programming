#include <stdio.h>

/**
 * main - main function
 *
 * Description: 'Print reverse alphabet'
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
