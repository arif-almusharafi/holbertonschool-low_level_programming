#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to extract the last digit from
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
    if (n < 0)
        n = -n;
    _putchar(n % 10 + '0');
}
