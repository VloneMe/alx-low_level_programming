#include "main.h"

/**
 * _abs - the abs function
 *
 * @n: an interger value
 *
 * Return: absolute value of n number
 *
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);

}
