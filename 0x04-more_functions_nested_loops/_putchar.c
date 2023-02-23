#include "main.h"
#include <unistd.h>
/**
 * _putchar - main function for put char
 *
 * @c: return input charater
 *
 * Return: 1 on succes
 *
 * On error, -1 is returned, and error is set appropriately
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
