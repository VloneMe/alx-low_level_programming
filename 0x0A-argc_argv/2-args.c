#include <stdio.h>
#include "main.h"

/**
 * main - this entry prints all arguments it receives
 *
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{
	int n = 0;

	for (; n < argc; n++)
		printf("%s\n", argv[n]);

	return (0);

}
