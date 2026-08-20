#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: Name of the file
 * @text_content: Text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int text_len;
	int bytes_written;

	/* 1. Check filename */
	if (filename == NULL)
		return -1;

	/* 2. Open the existing file for writing at the end */
	fd = open(filename, O_WRONLY);

	/* 3. Check if open failed */
	if (fd == NULL)
	{
		close(fd);
		return -1;
	}

	/* 4. If text_content is NULL */
	if (text_content == NULL)
		return 1;

	/* 5. Get length of text_content */
	text_len = strlen(text_content);

	/* 6. Write text to the file */
	bytes_written = write(fd, text_content, text_len);
	/* 7. Check if write succeeded */
	if (bytes_written != text_len)
	{
		close(fd);
		return -1;
	}
	/* 8. Close the file */
	close(fd);
	/* 9. Return success */
	return 1;
}
