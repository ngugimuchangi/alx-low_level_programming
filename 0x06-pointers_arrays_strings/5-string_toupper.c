#include "main.h"
/**
 * string_toupper - converts strings to uppercase.
 * @str: string to check
 * Return: void
 */
char *string_toupper(char *str)
{
	int i, j;

	j = 'a' - 'A';
	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= j;
		}
		else
		{
			continue;
		}
	}

	return (str);
}
