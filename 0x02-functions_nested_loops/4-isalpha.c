#include "main.h"

/**
 * _isalpha - check for alphabets
 *
 * @c: inout return character
 *
 * Return: 1 or 0 for otherwise
 *
 */

int _isalpha(int c)
{
	char lower, upper;
	int isLetter = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
		for (lower = 'a'; lower <= 'z'; lower++)
			if (c == upper || c == lower)
				isLetter = 0;

	return (isLetter);
}
