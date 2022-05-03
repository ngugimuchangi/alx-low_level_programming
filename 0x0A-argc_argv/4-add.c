#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: string arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int count, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (count = 1; count < argc; count++)
	{
		if (atoi(argv[count]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[count]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
