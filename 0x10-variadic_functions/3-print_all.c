#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - this function prints anything.
*
* @format: types of arguments passed to the function.
*
* Return: Nothing
*
*/

void print_all(const char * const format, ...)
{

	int n = 0;
	char *str, *sep = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", sep, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(ls, double));
					break;
				case 's':
					str = va_arg(ls, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					n++;
					continue;
			}
			sep = ", ";
			n++;
		}
	}

	printf("\n");
	va_end(ls);
}
