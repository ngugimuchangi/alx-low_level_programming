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

	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	i = read(fd, buff, letters);
	if (i < 0)
		return (0);
	close(fd);
	j = write(STDOUT_FILENO, buff, i);
	if (j < i)
		return (0);
	free(buff);
	return (i);
}
