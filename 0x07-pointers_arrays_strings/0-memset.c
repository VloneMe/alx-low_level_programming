#include "holberton.h"

/**
 * _memset - a function that fills memory with constant bytes
 *
 * @s: memory to fill
 * @b: char to fill memory location with
 * @n: number of bytes to fill
 *
 * Return: pointer to location filled
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *i = s;

	while (n--)
	{
		*s = b;
		s++;
	}

	return (i);

}
