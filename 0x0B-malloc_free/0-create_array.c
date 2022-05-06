#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars and initialize it
 * @size: size of the array
 * @c: character to place in the array
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(size * 1);
	for (i = 0; i < size; i++)
		*(ptr + i) = c;
	return (ptr);
}
