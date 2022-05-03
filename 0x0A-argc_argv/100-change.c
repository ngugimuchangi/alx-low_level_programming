#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument strings
 * Return: 0 for Success, 1 for Error
 */
int main(int argc, char **argv)
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents >= 25)
	{
		coins = cents / 25;
		cents = cents % 25;
	}
	if (cents >= 10)
	{
		coins += cents / 10;
		cents = cents % 10;
	}
	if (cents >= 5)
	{
		coins += cents / 5;
		cents = cents % 5;
	}
	if (cents >= 2)
	{
		coins += cents / 2;
		cents = cents % 2;
	}
	if (cents == 1)
		coins += 1;
	printf("%d\n", coins);
	return (0);
}
