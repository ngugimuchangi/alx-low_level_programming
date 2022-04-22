#include "main.h"
/**
 * leet - ecodes a string into 1377
 * @str: character string to encode
 * Return: str
 */
char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
			else
			{
				continue;
			}
		}
	}

	return (str);
}
