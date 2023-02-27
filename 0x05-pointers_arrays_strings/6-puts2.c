#include "main.h"

/**
 * puts2 - function for character of a string
 *
 * @str: input pointer
 *
 */

void puts2(char *str)
{
	int len = 0, n;

	while (str[len] != '\0')
		len++;

	len -= 1;

	for (n = 0; n <= len; n += 2)
		_putchar(str[n]);

	_putchar('\n');
}
