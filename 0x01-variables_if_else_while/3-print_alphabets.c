#include <stdio.h>

/**
 * main - main function
 *
 * Description: 'Uppercase and Lowercase Alphabet'
 *
 * Return: 0 (success)
 */
int main(void)
{
	char ch, ch1;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
	{
		putchar(ch1);
	}
	putchar('\n');

	return (0);
}
