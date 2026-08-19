#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file and writes text to it
 * @filename: Name of the file to create
 * @text_content: Text to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int string_len;
	int bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	string_len = strlen(text_content);
	bytes_written = write(fd, text_content, string_len);

	if (bytes_written != string_len)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
