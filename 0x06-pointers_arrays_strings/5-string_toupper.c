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
	char c = 0;

	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
			s[c] -= 32;
		c++;
	}

	return (s);
}
