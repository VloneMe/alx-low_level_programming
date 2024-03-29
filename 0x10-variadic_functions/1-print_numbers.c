#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - this funct prints numbers, followed by a new line.
*
* @separator: The string to be printed between numbers.
* @n: The number of integers passed to the function.
* @...: A variable number of numbers to be printed.
*
* Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list x;
	unsigned int i;

	va_start(x, n);

	i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(x);

}
