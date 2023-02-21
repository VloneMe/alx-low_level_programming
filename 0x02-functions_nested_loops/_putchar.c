#include "main.h"
#include <unistd.h>

/**
 * _putchar - The putchar function writes the character c in stdout
 *
 * @c: the character to be printed
 *
 * Return: On success 1.
 * on error, -1 is returned and eerrno is set appropriately
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
