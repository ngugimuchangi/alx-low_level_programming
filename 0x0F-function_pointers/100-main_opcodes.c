#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of argument strings
 * Description: prints the opcodes of main functin
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int number_of_bytes, i;
	char *func;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func = (char *)&main;
	for (i = 0; i < number_of_bytes; i++)
	{
		printf("%.2hhx", func[i]);
		if (i < number_of_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
