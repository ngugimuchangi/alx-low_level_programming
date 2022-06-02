#include "main.h"
/**
 * append_text_to_file - append new text to existing file
 * @filename: name of file
 * @text_content: text to append to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i, j;

	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	for (i = 0; text_content[i]; i++)
		;
	j = write(fd, text_content, i);
	if (j < i || j < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
