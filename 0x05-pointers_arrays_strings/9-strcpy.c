#include "main.h"

/**
 * _strcpy - cpy function
 *
 * @dest: pointe input
 * @src: pionter input
 *
 * Return: string
 *
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;

	return (aux);

}
