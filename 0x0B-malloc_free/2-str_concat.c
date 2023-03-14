#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 *
 * @s1: input one to concat
 * @s2: input two to concat
 *
 * Return: concat of s1 and s2
 *
 */

char *str_concat(char *s1, char *s2)
{

	char *concat;
	int n, m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
		n = m = 0;

	while (s1[n] != '\0')
		n++;

	while (s2[m] != '\0')
		m++;

	concat = malloc(sizeof(char) * (n + m + 1));

	if (concat == NULL)
		return (NULL);

	n = m = 0;
	while (s1[n] != '\0')
	{
		concat[n] = s1[n];
		n++;
	}

	while (s2[m] != '\0')
	{
		concat[n] = s2[m];
		n++, m++;
	}
	concat[n] = '\0';

	return (concat);

}
