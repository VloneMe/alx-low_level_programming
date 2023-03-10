#include "main.h"

/**
 * _islower - This checks the lower case only
 *
 * @c: an input character typo
 *
 * Return: 1 (succes)
 *
 */

int _islower(int c)
{
	char letter;
	int num = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			num = 1;
	}

	return (num);
}
