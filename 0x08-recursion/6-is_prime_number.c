#include "main.h"

int _prime(int n, int m);

/**
 * is_prime_number - says if an integer is a prime number or not
 *
 * @n: input interger
 *
 * Return: 1 or 0 if not
 *
 */

int is_prime_number(int n)
{

	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));

}

/**
 * _prime - vaerify if a number is prime recursively
 *
 * @n: number to evaluate
 * @m: iteration
 *
 * Return: 1 if prime, 0 if not
 *
 */

int _prime(int n, int m)
{

	if (m == 1)
		return (1);

	if (n % m == 0 && m > 0)
		return (0);

	return (actual_prime(n, m - 1));

}
