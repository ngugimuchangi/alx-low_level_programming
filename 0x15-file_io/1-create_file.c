#include "main.h"
/**
 * create_file - creates a new file
 * @filename: name of file
 * @text_content: text to copy to file
 * Description: creates a new file if it does not exist,
 * opens and truncates file it exists, then writes specified
 * content
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i, j;

	/* check if filename is empty */
	if (!filename)
		return (-1);
	/* open or create file and set permssion */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC,
			S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	/* check if string is empty */
	if (!text_content)
	{
		close(fd);
		return (1);
	}
	/* check length of string */
	for (i = 0; text_content[i] != '\0'; i++)
		;
	/* write content to file */
	j = write(fd, text_content, i);
	if (j < i || j < 0)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
