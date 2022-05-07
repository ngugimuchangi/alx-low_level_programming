#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments in your program
 * @ac: argument counts
 * @av: argument vector
 * Return: char pointer to concatenated argument string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, l = 0;
	char *ptr;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
		l++;
	}
	ptr = malloc((l + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	l = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, l++)
			*(ptr + l) = av[i][j];
		*(ptr + l) = '\n';
		l++;
	}
	*(ptr + l) = '\0';
	return (ptr);
}
