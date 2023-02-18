#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - main entry point of the program
 *
 * Return: Always 0 9success)
 *
 */

int main(void)
{
	int n, y;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	y = n % 10;

	if (y > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, y);
	else if (y == 0)
		printf("last digit of %d is %d and is 0\n", n, y);
	else
		printf("last digit of %d is %d is less than 6 and not 0\n", n, y);


	return (0);
}
