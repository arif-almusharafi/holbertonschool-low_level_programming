#include "main.h"

/**
 * print_line - Prints a line of the specified length.
 * @n: The length of the line to print.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
