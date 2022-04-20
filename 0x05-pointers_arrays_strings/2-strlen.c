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

	for (i = 0; *ptr; i++, *ptr++)
		size = i + 1;

	return (size);
}
