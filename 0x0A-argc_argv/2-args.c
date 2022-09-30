#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: Argument Count
 * @argv: Array of Pointers to Argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
