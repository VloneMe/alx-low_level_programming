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
	unsigned int x = 0, lens1 = 0, lens2 = 0;

	if (s1 == NULL)
		s1 = "";

	while (s1[lens1])
		lens1++;

	if (s2 == NULL)
		s2 = "";

	while (s2[lens2])
		lens2++;

	if (n >= lens2)
		n = lens2;

	p = malloc(lens1 + n + 1);
	if (p == NULL)
		return (NULL);

	for (; x < (lens1 + n); x++)
	{
		if (x < lens1)
			p[x] = *s1, s1++;
		else
			p[x] = *s2, s2++;
	}

	p[x] = '\0';
	return (p);
}
