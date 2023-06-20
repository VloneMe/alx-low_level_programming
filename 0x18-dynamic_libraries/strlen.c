/**
 * _strlen - A function that finds the length of the string
 *
 * @str: The input string
 * Return: The length of the string
 */
unsigned int _strlen(char *str)
{
	unsigned int length = 0;

	while (str[length])
		length++;

	return (length);
}
