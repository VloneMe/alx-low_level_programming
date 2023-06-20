/**
 * _strlen - A function that finds the length of the string
 *
 * @s: The input string
 * Return: The length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int length = 0;

	while (s[length])
		length++;

	return (length);
}
