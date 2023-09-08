#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/* Function to print an error message and exit */
void error_exit(int code, const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(code);
}

int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file");
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		error_exit(99, "Error: Can't write to file");
	}

	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			error_exit(99, "Error: Can't write to file");
		}
	}

	if (bytes_read == -1)
	{
		error_exit(98, "Error: Can't read from file");
	}

	if (close(fd_from) == -1)
	{
		error_exit(100, "Error: Can't close fd");
	}

	if (close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd");
	}

	return 0;
}
