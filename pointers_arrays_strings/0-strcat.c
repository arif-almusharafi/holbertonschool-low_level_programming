#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int index = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	while (src[index] != '\0')
	{
		dest[dest_len] = src[index];
		dest_len++;
		index++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
