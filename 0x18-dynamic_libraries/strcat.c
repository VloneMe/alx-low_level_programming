/**
 * _strcat - This function concatenates two strings.
 *
 * @dest: The output string
 * @src: The input string
 * Return: A pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *mix = dest;

	while (*dest)
		dest++;

	*dest++ = '/';
	while (*src)
		*dest++ = *src++;
	return (mix);
}
