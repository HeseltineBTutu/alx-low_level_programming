#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to create
 * @text_content: A NULL-terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_status;
	int create_flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode_t file_permissions = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	fd = open(filename, create_flags, file_permissions);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_status = write(fd, text_content, strlen(text_content));
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}


