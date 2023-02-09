#include "main.h"
/**
 * append_text_to_file - function to append text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	 /* Return -1 if filename is NULL */
	if (!filename)
		return (-1);

	/* Return 1 if text_content is NULL */
	if (!text_content)
		return (1);
	/* Open file in append mode */
	fp = fopen(filename, "a");
	/* Return -1 if file is not opened */
	if (!fp)
		return (-1);

	/* Write text_content to the file */
	if (fprintf(fp, "%s", text_content) < 0)
	{
		/* Close file and return -1 if write is not successful */
		fclose(fp);
		return (-1);
	}
	/* Close file and return 1 if write is successful */
	fclose(fp);
	return (1);
}
