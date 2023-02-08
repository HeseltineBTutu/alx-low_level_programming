#include "main.h"

/**
 * create_file - creates a file with specified name and content
 * @filename: name of the file to be created.
 * @text_content: content of the file (NULL terminated string).
 *
 * Return: 1 on success, -1 on failure
 *
 * If filename is NULL, return -1
 * If text_content is NULL, create an empty file
 * If file already exists, truncate it
 * The created file will have the following permissions: rw-------
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		/* Write the text content to the file */
		if (write(fd, text_content, strlen(text_content)) == -1)
		{
			return (-1);
		}
	}
	/* Close the file */
	if (close(fd) == -1)
		return (-1);
	return (1);
}
