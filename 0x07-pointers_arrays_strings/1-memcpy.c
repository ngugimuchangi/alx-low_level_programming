#include "main.h"
/**
 * _memcpy - copies the first n bytes from memory
 * area src to memory area dest
 * @dest: memory area to copy n bytes
 * @src: memory area to obtain n bytes
 * @n: bytes to copy(size of datatype x n)
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < (signed int) n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
