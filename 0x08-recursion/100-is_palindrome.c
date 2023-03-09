#include "main.h"

int is_pal(char *s, int m, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to reverse
 *
 * Return: 1, or 0 it's not
 *
 */

int is_palindrome(char *s)
{

	if (*s == 0)
		return (1);

	return (is_pal(s, 0, _strlen_recursion(s)));

}

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to return
 *
 * Return: string length
 *
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));

}

/**
 * is_pal - checks the characters recursively for palindrome
 *
 * @s: string check
 * @m: iteration
 * @len: length of the string
 *
 * Return: 1 for palindrome, 0 if not
 */

int is_pal(char *s, int m, int len)
{

	if (*(s + m) != *(s + len - 1))
		return (0);

	if (m >= len)
		return (1);

	return (is_pal(s, m + 1, len - 1));

}
