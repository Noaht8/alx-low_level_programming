#include <stdio.h>


/**
 * main - print HEX alphabet
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;
	char a = 'a';

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
