#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Unable to allocate memory\n");
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int close_status;

	close_status = close(fd);
	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If source file cannot be opened or read - exit code 98.
 * If destination file cannot be created or written to - exit code 99.
 * If file descriptors cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int source_fd, destination_fd, read_status, write_status;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer();
	source_fd = open(argv[1], O_RDONLY);
	destination_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (source_fd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		read_status = read(source_fd, buffer, 1024);
		if (read_status == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_status = write(destination_fd, buffer, read_status);
		if (destination_fd == -1 || write_status == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
	} while (read_status > 0);
	free(buffer);
	close_file(source_fd);
	close_file(destination_fd);
	return (0);
}

