#include <stdio.h>

/**
 * main - main funtion to print Fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	int t1 = 1, t2 = 2;
	int next = t1 + t2;

	printf("1, 2,\n");

	for (i = 1; i <= 48; i++)
	{
		if (i < 48)
		{
			printf("%d, ", next);
			t1 = t2;
			t2 = next;
			next = t1 + t2;
		}
		else
		{
			printf("%d\n", next);
		}
	}
	return (0);
}
