#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 *           pointed to by s with the constant byte c.
 * @s: Pointer to the memory area to be filled.
 * @c: Constant byte used to fill the memory.
 * @n: Number of bytes to fill.
 *
 * Return: Pointer to the memory area s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned char *memory;
	size_t index;

	memory = (unsigned char *)s;

	for (index = 0; index < n; index++)
	{
		memory[index] = (unsigned char)c;
	}

	return (s);
}
