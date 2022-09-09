#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main function
 *
 * Description: 'Positive or Negative number Identifier
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is a Positive Number\n", n);
	}
	else if (n == 0)
	{
		printf("%d is Zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is a Negative Number\n", n);
	}

	return (0);
}
