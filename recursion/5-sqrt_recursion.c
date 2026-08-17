#include "main.h"

/**
 * helper - Finds the natural square root recursively
 * @n: Number to find the square root of
 * @current: Current number being tested
 *
 * Return: The natural square root, or -1 if none exists
 */
int helper(int n, int current)
{
	if (current * current < n)
		return (helper(n, current + 1));
	else if (current * current > n)
		return (-1);
	else
		return (current);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find the square root of
 *
 * Return: The natural square root, or -1 if none exists
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (helper(n, 0));
}
