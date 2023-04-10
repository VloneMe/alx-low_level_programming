#include "main.h"

/**
 * append_text_to_file - This function appends text at the end of a file.
 *
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 * Return: If fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x, y, z;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (z = 0; text_content[z];)
			z++;
	}

	z = 0;
	x = open(filename, O_WRONLY | O_APPEND);
	y = write(x, text_content, z);

	if (x == -1 || y == -1)
		return (-1);

	close(x);

	return (1);
}

