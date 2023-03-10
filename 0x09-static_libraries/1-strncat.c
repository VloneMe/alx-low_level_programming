#include "main.h"

/**
 * _strncat - This concatenates two strings
 *
 * @dest: String input
 * @src: String input
 * @n: interger input
 *
 * Return: Pointer string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int n1 = 0, m1 = 0;

	while (dest[n1] != '\0')
		n1++;

	while (m1 < n && src[m1] != '\0')
	{
		dest[n1] = src[m1];
		n1++;
		m1++;
	}

	dest[n1] = '\0';
	return (dest);

}
