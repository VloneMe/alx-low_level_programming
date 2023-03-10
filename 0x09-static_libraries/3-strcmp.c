#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: String input
 * @s2: String input
 *
 * Return: difference of s1 - s2
 *
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}

	return (*s1 - *s2);

}
