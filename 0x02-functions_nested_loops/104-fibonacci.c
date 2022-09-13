#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main function to display first 98 fibonacci numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int t1 = 0;
	unsigned long int b1 = 1;
	unsigned long int t2 = 0;
	unsigned long int b2 = 2;
	unsigned long int h1, h2, h3;
	int i;

	printf("%lu, %lu, ", b1, b2);
	for (i = 2; i < 98; i++)
	{
		if (b1 + b2 > LARGEST || t2 > 0 || t1 > 0)
		{
			h1 = (b1 + b2) / LARGEST;
			h2 = (b1 + b2) % LARGEST;
			h3 = t1 + t2 + h1;
			t1 = t2;
			t2 = h3;
			b1 = b2;
			b2 = h2;
			printf("%lu%010lu", t2, b2);
		}
		else
		{
			h2 = b1 + b2;
			b1 = b2;
			b2 = h2;
			printf("%lu", b2);
		}
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
