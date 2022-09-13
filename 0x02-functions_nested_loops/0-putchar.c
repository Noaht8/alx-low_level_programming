#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character a to stdout
 * @c: The character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
