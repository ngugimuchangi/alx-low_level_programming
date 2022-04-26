#include "main.h"
/**
 * _memset - prints the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: char pointer referencing string array to fill
 * @b: character to enter
 * @n: bytes to enter
 * Return: char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < (signed int) n; i++)
		*(s + i) = b;
	return (s);
}
