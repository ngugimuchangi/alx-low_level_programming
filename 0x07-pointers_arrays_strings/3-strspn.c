#include "main.h"
/**
 * _strspn - returns number of bytes that much specified criteria
 * @s: string to search
 * @accept: search string
 * Return: number of bytes matching search criteria
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0;

	for (i = 0; *(accept + i); i++)
	{
		for (j = 0; *(s + j); j++)
		{
			if (*(s + j) == *(accept + i))
			{
				k = j + 1;
				return ((unsigned int) k);
			}
		}
	}
	if (*(s + j) == *(accept + i))
	{
		k = j + 1;
	return ((unsigned int) k);
	}
	return ((unsigned int) k);
}
