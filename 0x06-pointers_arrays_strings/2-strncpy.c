#include "main.h"
/**
 * _strncpy - copy n bytes of one string to another
 * to another string
 * @dest: destination string
 * @src: source string
 * @n: bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	/* find length of dest upto null character */
	i = 0;
	while (src[i])
		i++;

	/* add n bytes of src to dest */
	for (j = 0; j < n && j <= i; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
