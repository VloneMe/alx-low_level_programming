#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - this function returns sum of all its paramters.
*
* @n: number of paramters passed to the function.
* @...: A variable number of paramters to calculate the sum of.
*
* Return: If n == 0 - 0.
*
*/

int sum_them_all(const unsigned int n, ...)
{

	va_list na;
	unsigned int i, output;

	va_start(na, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(na, int);

	va_end(na);

	return (output);

}
