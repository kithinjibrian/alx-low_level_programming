#include "main.h"

/**
 * read_textfile - Reads a text file and writes it to standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The maximum number of bytes to read and write.
 *
 * Return: The number of bytes written to standard output on success,
 *         or -1 on failure (including memory allocation, file opening,
 *         reading, and writing errors).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (-1);

	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}

	r = read(fd, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}

	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	close(fd);

	if (w == -1 || w != r)
		return (-1);

	return (w);
}
