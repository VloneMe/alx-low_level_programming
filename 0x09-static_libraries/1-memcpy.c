#include "main.h"

/**
 * _memcpy - this function that copies memory area
 *
 * @dest: memory  store
 * @src: memory  copied
 * @n: number of bytes
 *
 * Return: copied memory with n bytes
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i, j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);

}
