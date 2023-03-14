#include <stdlib.h>
#include "main.h"

/**
* *argstostr - Function to  concatenates all the arguments of the program
*
* @ac: number of arguments
* @av: array of arguments
*
* Return: Pointer to the new string (Success), NULL (Error)
*/

char *argstostr(int ac, char **av)
{

	int n, m, x, len;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	x = 0;
	for (n = 0; n < ac; n++)
	{
		for (m = 0; av[n][m] != '\0'; m++)
		{
			str[x] = av[n][m];
			x++;
		}
		str[x] = '\n';
		x++;
	}

	return (str);

}
