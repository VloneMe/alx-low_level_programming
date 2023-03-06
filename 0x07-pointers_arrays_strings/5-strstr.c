#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function that locates a substring.
 *
 * @haystack: an input string
 * @needle: an input string to a string haystack
 *
 * Return: 0 (success) or NULL;
 */

char *_strstr(char *haystack, char *needle)
{
	char *n = needle, *m = haystack;

	while (*haystack)
	{
		m = haystack;
		needle = n;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = m + 1;
	}

	return (NULL);

}
