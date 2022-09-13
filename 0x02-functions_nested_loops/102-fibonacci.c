#include <stdio.h>

/**
 * main - main funtion to print Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	long int t1 = 0, t2 = 1;
	long int next = t1 + t2;

	for (i = 1; i <= 50; i++)
	{
		if (i < 50)
		{
			printf("%lu, ", next);
			t1 = t2;
			t2 = next;
			next = t1 + t2;
		}
		else
		{
			printf("%lu\n", next);
		}
	}
	return (0);
}
