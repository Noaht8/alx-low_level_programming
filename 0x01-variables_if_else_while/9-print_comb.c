#include <stdio.h>

/**
 * main - main function
 *
 * Description: 'single-digit numbers'
 *
 * Return: 0 (success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num == '9')
		{
			putchar('$');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			num++;
		}
	}
	return (0);
}
