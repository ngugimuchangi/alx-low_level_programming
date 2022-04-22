#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if equal,
 * > 0 if first nonmatching character in s1 is
 * greater (in ASCII) than that of s2
 * < 0 if first nonmatching character in s1 is
 * less than (in ASCII) that of s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = 0;
	for (i = 0; s1[i]; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else
		{
			j = s1[i] - s2[i];
			break;
		}
	}

	return (j);
}
