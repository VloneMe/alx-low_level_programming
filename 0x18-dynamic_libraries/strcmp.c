/**
 * _strcmp - This function compares two strings.
 *
 * @str1: The first pointer string to compare
 * @str2: The second pointer string to compare
 * Return: 1 if strings are the same, 0 if not
 */
int _strcmp(char *str1, char *str2)
{
	unsigned int num = 0;

	while (str1[num])
	{
		if (str1[num] != str2[num])
			return (0);
		num++;
	}

	return (1);
}
