/**
 * _strspn - function entry point
 *
 * @s: input pointer
 * @accept: input pointer
 *
 * Return: Always 0 (Success)
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, g;
	char *n = accept;

	while (*s)
	{
		g = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				i++;
				g = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = n;
		if (g == 0)
			break;
	}

	return (i);

}
