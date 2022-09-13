#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character 'a' to stdout
 * @a: The character that will be printed
 *
 * Return: 1 (success)
 * On error, -1 (error)
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
