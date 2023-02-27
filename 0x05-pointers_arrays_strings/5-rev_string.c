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
	char n = s[0];
	int i = 0;
	int j;

	while (s[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		i--;

		n = s[j];
		s[j] = s[i];
		s[i] = s[n];
	}


}
