#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes character 'c' to stdout
 * @c: The character that will be printed
 *
 * Return: 1 (success)
 * On error, -1 (error)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
