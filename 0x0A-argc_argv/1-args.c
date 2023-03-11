#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of arguments passed to the program
 *
 * @argc: arguments counter
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 *
 */

int main(int argc, char *argv[])
{

	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);

}
