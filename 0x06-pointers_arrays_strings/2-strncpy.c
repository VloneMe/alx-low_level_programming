#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * @dest: String input
 * @src: String input
 * @n: Interger input
 *
 * Return: Pointer string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int m = 0;

	while (m < n && src[m] != '\0')
	{
		dest[m] = src src[m];
		m++;
	}

	while (m < n)
	{
		dest[m] = '\0';
		m++;
	}

	return (dest);
}
