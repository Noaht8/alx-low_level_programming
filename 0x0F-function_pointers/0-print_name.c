#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: Name to be Printed
 * @f: A pointer to a function that accepts a string and
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
