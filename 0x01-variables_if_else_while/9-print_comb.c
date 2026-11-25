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
		if (num == 57)
			break;
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
