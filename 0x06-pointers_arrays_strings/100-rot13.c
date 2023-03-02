#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 *
 * @s: pointer
 *
 * Return: string
 */

char *rot13(char *s)
{
	int n, m;

	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (n = 0; s[n] != '\0'; n++)
	{
		for (m = 0; m < 52; m++)
		{
			if (s[n] == data[m])
			{
				s[n] = datarot[m];
				break;
			}
		}
	}

	return (s);

}

