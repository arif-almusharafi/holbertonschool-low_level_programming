#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * Return: Nothing.
 */
void print_rev(char *s)
{
	while (*s == '\0')
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
