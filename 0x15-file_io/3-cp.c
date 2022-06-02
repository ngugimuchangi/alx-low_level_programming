#include <stdarg.h>
#include "main.h"
/**
 * copy - copies content of one file
 * @file_from: file to copy content
 * @buff: buffer to store copied content
 *
 * Return: numer of copied characters
 */
int copy(char *file_from, char *buff)
{
	int fd;
	ssize_t i, j;

	fd = open(file_from, O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	i = read(fd, buff, 5000);
	if (i < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	j = close(fd);
	if (j < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (i);
}
/**
 * paste - pastes copied content
 * @file_from: file to copy content
 * @file_to: file to paste content
 *
 * Return: nothing
 */
void paste(char *file_from, char *file_to)
{
	int fd;
	ssize_t i, j, k;
	char buff[5000];

	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	k = copy(file_from, buff);
	i = write(fd, buff, k);
	if (i < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	j = close(fd);
	if (j < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: list of argments
 *
 * Return: always 0 on success.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	paste(argv[1], argv[2]);
	return (0);
}
