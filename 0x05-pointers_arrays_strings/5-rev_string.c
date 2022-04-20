#include "main.h"
/**
 * rev_string - reverse order of string;
 * @s: string variable
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char c;

	i = 0;
	while (s[i])
	{
		i++;
	}

	j = 0;
	while (j < i)
	{
		c = s[j];
		s[j] = s[i - 1];
		s[i - 1] = c;
		j++;
		i--;
	}
}
