#include "main.h"

/**
 * _strchr - function entry point
 *
 * @s: input pointer
 * @c: input
 *
 * Return: Always 0 (Success)
 *
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (&s[n]);
	}

	return (0);

}

