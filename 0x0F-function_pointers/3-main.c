#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - program to perform arithmetic operations by calling
 * helper functions
 * @argc: the number of command line arguments
 * @argv: Array of strings containing one command line argument
 * per string
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int n1, n2, result;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) == 1 && (argv[2][0] == '+' || argv[2][0] == '-'
				|| argv[2][0] == '*' || argv[2][0] == '/' ||
				argv[2][0] == '%'))
	{
		if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
		{
			printf("Error\n");
			exit(100);
		}
		n1 = atoi(argv[1]);
		n2 = atoi(argv[3]);

		ptr = get_op_func(argv[2]);
		result = ptr(n1, n2);
		printf("%d\n", result);
		return (0);
	}
	printf("Error\n");
	exit(99);
}
