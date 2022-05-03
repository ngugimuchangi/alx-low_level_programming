#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument strings
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int count;

	printf("%s\n", *argv);
	if (argc > 1)
		for (count = 1; count < argc; count++)
			printf("%s\n", argv[count]);
	return (0);
}
