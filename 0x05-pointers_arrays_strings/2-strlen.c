#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: strin constant to check
 * Return: string length
 */

int _strlen(char *s)
{
	char *ptr = s;
	int i, size;

	size = 0;
	for (i = 0; *ptr; i++, *ptr++)
	{
		size += 1;
	}

	return (size);
}
