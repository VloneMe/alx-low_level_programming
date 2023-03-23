#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - this function returns sum of all its paramters.
*
* @n: number of paramters passed to the function.
* @...: A variable number of paramters to calculate the sum of.
*
* Return: 0, If n == 0.
*
*/

int sum_them_all(const unsigned int n, ...)
{

	va_list ap;
	unsigned int i, output;

	va_start(ap, n);

	output = 0;
	for (i = 0; i < n; i++)
		output += va_arg(ap, int);

	va_end(ap);

	return (output);

}
