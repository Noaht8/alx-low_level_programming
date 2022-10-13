#include "variadic_functions.h"

/**
* print_strings - a function that prints strings
* @separator: the string to be printed between each string
* @n: the number of strings passed to the function
* Return: returns nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list args;
	char *str;

	va_start(args, n);

	for (a = 0; a < n; a++)
	{
		str = va_arg(args, char *);
		if (str != NULL)
		{
			if (a == (n - 1))
			{
				printf("%s", str);
				break;
			}
			if (separator == NULL)
				printf("%s", str);
			else
				printf("%s%s", str, separator);
		}
		else if (str == NULL)
		{
			if (a == (n - 1))
			{
				printf("(nil)");
				break;
			}
			if (separator == NULL)
				printf("(nil)");
			else
				printf("(nil)%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

