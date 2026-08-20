#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * close_file - Closes a file descriptor
 * @fd: File descriptor
 *
 * Return: 0 on success, 100 on failure
 */
int close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		return (100);
	}

	return (0);
}

/**
 * copy_file - Copies the content of one file to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @filename: Source filename
 *
 * Return: 0 on success, 98 or 99 on failure
 */
int copy_file(int fd_from, int fd_to, char *filename)
{
	int bytes_read;
	int bytes_written;
	char buffer[1024];

	while ((bytes_read = read(fd_from, buffer, 1024)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", filename);
			return (99);
		}
	}

	if (bytes_read < 0)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", filename);
		return (98);
	}

	return (0);
}

/**
 * main - Copies the content of one file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, error code on failure
 */
int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;
	int result;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
		return (99);
	}

	result = copy_file(fd_from, fd_to, argv[1]);
	if (result != 0)
	{
		close(fd_from);
		close(fd_to);
		return (result);
	}

	if (close_file(fd_from) == 100)
		return (100);

	if (close_file(fd_to) == 100)
		return (100);

	return (0);
}
