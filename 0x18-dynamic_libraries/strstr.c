#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function that locates a substring.
 *
 * @haystack: an input string
 * @needle: an input string to a string haystack
 *
 * Return: 0 (success);
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *n = haystack;
		char *m = needle;

		while (*n == *m  && *m != '\0')
		{
			n++;
			m++;
		}

		if (*m == '\0')
			return (haystack);
	}

	return (0);

}
