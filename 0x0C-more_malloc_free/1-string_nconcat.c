#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - a function concatenates n bytes of a string
 *
 * @s1: string to
 * @s2: string from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer resulting string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;

	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		p = malloc(sizeof(char) * (len1 + n + 1));

	else
		p = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!s)
		return (NULL);

	while (x < len1)
	{
		s[x] = s1[x];
		x++;
	}

	while (n < len2 && x < (len1 + n))
		s[x++] = s2[y++];

	while (n >= len2 && x < (len1 + len2))
		s[x++] = s2[y++];

	s[x] = '\0';

	return (s);
}
