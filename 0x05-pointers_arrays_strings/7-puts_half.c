#include "main.h"

/**
 * puts_half - half of a string
 *
 * @str: pointer input
 *
 */

puts_half(char *str)
{
	intlen = 0;

	while (*str != '\0')
	{
		n++;
		str++;
	}

	str -= (len / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
