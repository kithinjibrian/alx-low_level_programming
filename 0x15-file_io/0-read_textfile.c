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
	char *buf;
	int lenRead, lenWrite;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(letters * sizeof(char));

	if (buf == NULL)
		return (0);

	lenRead = read(fd, buf, letters);

	lenWrite = write(STDOUT_FILENO, buf, lenRead);
	if (lenWrite != lenRead && lenWrite == -1)
		return (0);
	free(buf);
	close(fd);
	return (lenRead);
}
