#include <stdio.h>

/**
 * main - main function to display first 98 fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int t1 = 0;
	unsigned long int t2 = 1;
	unsigned long int next;

	for (i = 1; i <= 98; i++)
	{
		next = t1 + t2;

		if (i < 98)
		{
			printf("%lu, ", next);
		}
		else
		{
			printf("%lu\n", next);
		}
		t1 = t2;
		t2 = next;
	}
	return (0);
}
