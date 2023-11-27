#include "main.h"

/**
 * create_file - Creates a file with specified content.
 * @filename: The name of the file to be created.
 * @text_content: The NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_status, close_status;
	ssize_t text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
			text_length++;

		write_status = write(fd, text_content, text_length);
		if (write_status == -1)
		{
			close_status = close(fd);
			return (-1);
		}
	}

	close_status = close(fd);
	if (close_status == -1)
		return (-1);

	return (1);
}

