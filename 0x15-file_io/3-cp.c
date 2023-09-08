#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_exit - Print an error message and exit the program.
 * @code: The exit code to use.
 * @message: The error message to display.
 *
 * This function prints an error message to the standard error stream
 * and exits the program with the specified exit code.
 */
void error_exit(int code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(code);
}

/**
 * main - Copy the contents of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_exit(97, "cp file_from file_to");
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Can't read from file");
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		error_exit(99, "Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_exit(99, "Can't write to file");
		}
	}

	if (bytes_read == -1)
	{
		error_exit(98, "Can't read from file");
	}

	if (close(fd_from) == -1)
	{
		error_exit(100, "Can't close fd");
	}

	if (close(fd_to) == -1)
	{
		error_exit(100, "Can't close fd");
	}

	return (0);
}
