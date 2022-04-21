#include "main.h"
/**
 * _strcpy - copies strings
 * @dest: destination string array
 * @src: string array to be copied
 * Return: character array
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i])
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
