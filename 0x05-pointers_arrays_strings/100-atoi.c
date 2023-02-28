#include "main.h"

/**
 * _atoi - converts string to an interger
 *
 * @s: pointer input
 *
 * Return: interger of a conversion
 *
 */

int _atoi(char *s)
{
	int s = 1;

	unsigned int t = 0;

	char null_f = 0;

	while (*s)
	{
		if (*s == '-')
			s *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_f = 1;
			total = t * 10 + *s - '0';
		}

		else if (null_f)
			break;
		s++;
	}

	if (s < 0)
		t = (-t);

	return (t);

}
