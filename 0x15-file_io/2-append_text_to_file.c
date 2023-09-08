#include "main.h"

/**
 * append_text_to_file - Appends text content to an existing file.
 *
 * @filename: The name of the file to append content to.
 * @text_content: The text content to append (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	/* Open the file in read-write mode with append flag */
	fd = open(filename, O_RDWR | O_APPEND);

	/* Check for errors when opening the file */
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, append its contents to the file */
	if (text_content != NULL)
	{
		int len, byte_write;

		/* Calculate the length of the text content */
		for (len = 0; text_content[len] != '\0'; len++)
			;

		/* Write the text content to the file */
		byte_write = write(fd, text_content, len);

		/* Check for write errors */
		if (byte_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Close the file */
	close(fd);

	/* Return 1 to indicate success */
	return (1);
}
