#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - This function print strings followed by a new line.
 *
 * @separator: An input string.
 * @n: number of parameters.
 * @...: Other parameters
 *
 * Return: Nothing
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	i = 0;
	for (; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);

}
