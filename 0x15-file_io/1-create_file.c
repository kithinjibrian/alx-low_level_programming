#include "main.h"

/**
 * create_file - Creates a new text file with the specified content.
 *
 * @filename: The name of the file to create or overwrite.
 * @text_content: The text content to write to the file (can be NULL).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (-1);

	/* Open or create the file write-only mode, truncate, permissions to 0600*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/* Check for errors when opening or creating the file */
	if (fd == -1)
		return (-1);

	/* If text_content is not NULL, write its contents to the file */
	if (text_content != NULL)
	{
		int byte_write, len;

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
