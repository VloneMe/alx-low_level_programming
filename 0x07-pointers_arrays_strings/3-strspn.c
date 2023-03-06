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
	unsigned int n;
	int m;

	while (*s)
	{
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);

}
