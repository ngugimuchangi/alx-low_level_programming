#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: string array of variables
 * Return: 0 on succcess.
 */
int main(int argc, char **argv)
{
	int a, b, c;
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	calc = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	c = calc(a, b);
	printf("%d\n", c);
	return (0);
}
