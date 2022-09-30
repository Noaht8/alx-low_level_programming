#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * checker - function that checks if the input is a number or not
 * @a: Input Character
 * Return: 1 if number, 0 if not
 */
int checker(char *a)
{
	int i, num, l;

	i = 0;
	num = 0;
	l = strlen(a);
	while (i < l)
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (-1);
		}
		else
		{
			num = num * 10 + (a[i] - '0');
			i++;
		}
	}
	return (num);
}
/**
 * main - function that adds positive numbers
 * @argc: Argument Count
 * @argv: Array Pointer to the Argument
 * Return: Sum or 1
 */
int main(int argc, char *argv[])
{
	int a, num, sum;

	sum = 0;
	for (a = 1; a < argc; a++)
	{
		num = checker(argv[a]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
