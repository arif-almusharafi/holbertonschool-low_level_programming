#include "main.h"

/**
 * helper - Checks if a number is prime recursively
 * @n: Number to check
 * @divisor: Current divisor
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int helper(int n, int divisor)
{
	if (n <= 1)
		return (0);
	else if (divisor * divisor > n)
		return (1);
	else if (n % divisor == 0)
		return (0);
	else
		return (helper(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: Number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (helper(n, 2));
}
