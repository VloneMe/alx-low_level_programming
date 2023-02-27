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
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}
	*(dest + len) = '\n';
	return (dest);
}
