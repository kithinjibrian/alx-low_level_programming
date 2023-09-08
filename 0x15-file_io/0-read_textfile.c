#include "main.h"

/**
 * read_textfile - Reads and displays the contents of a text file to stdout.
 *
 * @filename: The name of the text file to be read.
 * @letters: The number of characters to read and display.
 *
 * Return: The number of bytes read and displayed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	int byte_read, byte_write;

	/* Check if the filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open the file in read-only mode */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* Allocate memory for the buffer */
	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
		return (0);

	/* Read data from the file into the buffer */
	byte_read = read(fd, buffer, letters);

	/* Write the read data to stdout (standard output) */
	byte_write = write(STDOUT_FILENO, buffer, byte_read);

	/* Check for write errors or incomplete writes */
	if (byte_write != byte_read && byte_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* Free the allocated memory and close the file */
	free(buffer);
	close(fd);

	/* Return the number of bytes read and displayed */
	return (byte_read);
}
