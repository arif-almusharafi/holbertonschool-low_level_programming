#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: Destination buffer.
 * @src: Source buffer.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to dest.
 */
void *_memcpy(void *dest, const void *src, size_t n)
{
	size_t index;
	unsigned char *destination;
	const unsigned char *source;

	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;

	for (index = 0; index < n; index++)
	{
		destination[index] = source[index];
	}

	return (dest);
}
