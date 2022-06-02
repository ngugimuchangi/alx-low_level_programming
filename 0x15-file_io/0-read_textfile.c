#include "main.h"
/**
 * read_textfile - reads text from a file and prints it to stdout
 * @filename: name of the file
 * @letters: number of characters to read
 *
 * Return: number of letters read on success, 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i, j;
	int fd;
	char *buff;

	/* check if filename is empty */
	if (!filename)
		return (0);
	/* allocate memory to store read chracters */
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	/* open file */
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	/* read and close file */
	i = read(fd, buff, letters);
	if (i < 0)
		return (0);
	close(fd);
	/* write to stdout */
	j = write(STDOUT_FILENO, buff, i);
	/* check if bytes written are as expected */
	if (j < i)
	{
		free(buff);
		return (0);
	}
	/* free memory */
	free(buff);
	return (i);
}
