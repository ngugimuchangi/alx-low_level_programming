#include "main.h"
/**
 * cap_string - capitalizes first letter of words on in a string
 * @str: string to check
 * Return: str
 */
char *cap_string(char *str)
{
	int i, j;

	j = 'a' - 'A';
	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t'
					|| str[i - 1] == '.' || str[i - 1] == '?'
					|| str[i - 1] == ',' || str[i - 1] == '"'
					|| str[i - 1] == '!' || str[i - 1] == ';'
					|| str[i - 1] == '(' || str[i - 1] == ')'
					|| str[i - 1] == '{' || str[i - 1] == '}')
			{
				str[i] -= j;
			}
		}
		else
		{
			continue;
		}
	}

	return (str);
}
