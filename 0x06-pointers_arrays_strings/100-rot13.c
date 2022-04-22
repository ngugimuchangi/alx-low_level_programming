#include "main.h"
/**
 * rot13 - encodes string using ROT13
 * @str: string to encode
 * Return: str (encoded string);
 */
char *rot13(char *str)
{

	int i, j;
	char a[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char b[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; a[j]; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
			else
			{
				continue;
			}
		}
	}
	return (str);
}
