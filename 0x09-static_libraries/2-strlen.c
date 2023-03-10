#include "main.h"

/**
 * _strlen - Check length function
 *
 * @s: input pointer
 *
 * Return: Nothing
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
