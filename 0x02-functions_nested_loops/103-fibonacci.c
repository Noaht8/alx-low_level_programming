#include <stdio.h>

/**
 * main - main function that prints the sum of the even-valued terms
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int t1 = 0;
	long int t2 = 1;
	long int sum = 0;
	long int next;

	while (next <= 4000000)
	{
		next = t1 + t2;
		if (next % 2 == 0)
		{
			sum += next;
		}
		t1 = t2;
		t2 = next;
	}
	printf("%lu\n", sum);
	return (0);
}
