#include "main.h"
/**
 * _strncat - concatenates n bytes of one string
 * to another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* find length of dest upto null character */
	i = 0;
	while (dest[i])

		i++;

	/* add n bytes of src to dest */
	for (j = 0; j < n && src[j]; i++, j++)
		dest[i] = src[j];

	return (dest);

}
