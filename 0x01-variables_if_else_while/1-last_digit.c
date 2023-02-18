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

	if (y % 10 > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, y % 5);
	else if (y % 10 == 0)
		printf("Last digit of %d is %d and is 0\n", n, y % 10);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y % 10);


	return (0);
}
