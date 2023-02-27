#include "main.h"

/**
 * _strcpy - cpy function
 *
 * @dest: pointe input
 * @src: pionter input
 *
 * Return: pointer to dest
 *
 */

char *_strcpy(char *dest, char *src)
{
	char *n = dest;

	while (*src)
		*dest++ = *src++;

	return (n);
}
