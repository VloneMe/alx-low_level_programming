#include "main.h"

/**
 * _strcat - Concatnation function
 *
 * @dest: String input
 * @src: String input
 *
 * Return: Pointer string
 *
 */

char *_strcat(char *dest, char *src)
{
	char *mix = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';

	return (mix);

}
