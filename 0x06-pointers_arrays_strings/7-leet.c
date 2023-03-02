#include "main.h"

/**
 * leet - function that encodes a string into 1337
 *
 * @e: pointer
 *
 * Return: Pointer to chande a string
 *
 */

char *leet(char *e)
{
	int n, m;

	char subs[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'},
	     str[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	n = 0;
	while (e[n])
	{
		for (m = 0; m < 10; m++)
			if (e[n] == str[m])
				s[m] = subs[m];

		n++;
	}

	return (e);
}
