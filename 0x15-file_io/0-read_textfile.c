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
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (w);
}
