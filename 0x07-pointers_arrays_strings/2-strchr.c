#include "main.h"
#include <stdio.h>
/**
 * _strchr - finds the first occurence of character
 * @s: string to search
 * @c: character to find
 * Return: On success - char pointer pointing to the
 * memory occurrence of c; On failure - NULL.
 */
char *_strchr(char *s, char c)
{
	int i;
	char *find;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			find = (s + i);
			return (find);
		}
	}
	return (NULL);
}
