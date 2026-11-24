#include <stdio.h>


/**
 * main - man function to print from 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}

