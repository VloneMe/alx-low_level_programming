/**
 * _strcpy - This function copies a string to another string.
 *
 * @dest: The pointer to the copy pointer string
 * @src: The pointer to the string to copy
 * Return: A pointer to copied string
 */
char *_strcpy(char *dest, char *src)
{
	char *mix = dest;

	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (mix);
}
