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
	int l = 0, n;

	while (*(src + l) != '\0')
		l++;

	for (n = 0; n < l ; n++)
		dest[n] = src[n];

	dest[l] = '\0';
	return (dest);
}

