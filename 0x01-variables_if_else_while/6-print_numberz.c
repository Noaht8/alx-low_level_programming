#include <stdio.h>

/**
 * main - main function
 *
 * Description: 'Single digit numbers'
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
