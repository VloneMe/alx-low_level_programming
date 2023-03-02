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

	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (n = 0; e[n] != '\0'; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (e[n] == str1[m])
			{
				e[n] = str2[m];
			}
		}
	}

	return (e);
}


