#include <unistd.h>
#include <main.h>

/**
 * _putchar - writes the character a to stdout
 * @a: The character to print
 *
 * Return: 1 (success)
 * On error, -1 is returned
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
