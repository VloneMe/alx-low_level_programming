#include "main.h"

/**
 * _puts - main put function
 *
 * @s: inputs string
 *
 * Return: string
 *
 */

void _puts(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		_putchar(s[n]);
		n++;
	}
	_putchar('\n');
}
