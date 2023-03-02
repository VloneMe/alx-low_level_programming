#include "main.h"

/**
 * string_toupper - function to change lowercase letters to uppercase
 *
 * @s: string input
 *
 * Return: Converted string
 *
 */

char *string_toupper(char *s)
{
	char *c = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (c);
}
