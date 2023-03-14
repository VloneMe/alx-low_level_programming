#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 *
 * @str: char
 *
 * Return: 0 Always
 *
 */

char *_strdup(char *str)
{

	char *str1;
	int n, m = 0;

	if (str == NULL)
		return (NULL);

	n = 0;
	while (str[n] != '\0')
		n++;

	str1 = malloc(sizeof(char) * (n + 1));

	if (str1 == NULL)
		return (NULL);

	for (m = 0; str[m]; m++)

		str1[m] = str[m];

	return (str1);

}
