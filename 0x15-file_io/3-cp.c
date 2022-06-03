#include <stdarg.h>
#include "main.h"
/**
 * err_98 - displays error for copy (1st) file
 * @i: return value of open or read calls
 * @file_from: copy file
 *
 * Return: nothing
 */
void err_98(ssize_t i, char *file_from)
{
	if (i < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
}
/**
 * err_99 - displays error for paste (2nd) file
 * @i: return value for open and write calls
 * @file_to: paste file
 *
 * Return: nothing
 */
void err_99(ssize_t i, char *file_to)
{
	if (i < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}
/**
 * err_100 - displays errors for closing files
 * @i: return value for close call
 * @fd: file descriptor of file being closed
 *
 * Return: nothing
 */
void err_100(ssize_t i, int fd)
{
	if (i < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * copy_paste - copies and pastes file contents
 * @file_from: file to copy content
 * @file_to: file to paste content
 *
 * Return: nothing
 */
void copy_paste(char *file_from, char *file_to)
{
	int fd, fd2;
	ssize_t i = 1024, j, k;
	char buff[1024];

	fd = open(file_from, O_RDONLY);
	err_98(fd, file_from);
	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	err_99(fd2, file_to);
	while (i == 1024)
	{
		i = read(fd, buff, 1024);
		if (i == 0)
			break;
		err_98(i, file_from);
		j = write(fd2, buff, i);
		if (j < 0 || j != i)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	k = close(fd);
	err_100(k, fd);
	k = close(fd2);
	err_100(k, fd2);
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
	copy_paste(argv[1], argv[2]);
	return (0);
}
