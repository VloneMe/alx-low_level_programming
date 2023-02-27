#include "main.h"

/**
 * rev_string -  recersing function of strings
 *
 * @s: input pointer
 *
 * Return: length of the string
 */

void rev_string(char *s)
{
	int n = 0;

	while (s[n] != '\0')
		n++;

	return (n);

}
