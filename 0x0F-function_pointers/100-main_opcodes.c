#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: Number of command line arguments
 * @argv: Array of strings that contain each command line argument
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *str;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}
	str = (char *) main;
	for (a = 0; a < b; a++)
	{
		if (a == b - 1)
		{
			printf("%02hhx\n", str[a]);
			break;
		}
		printf("%02hhx ", str[a]);
	}
	return (0);
}
