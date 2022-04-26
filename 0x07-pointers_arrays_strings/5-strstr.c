#include "main.h"
/**
 * _strstr -find the first occurrence of a substring
 * @haystack: string to search in.
 * @needle: substring to find.
 * Return: pointer to the substring on success, otherwise null.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; *(haystack + i); i++)
	{
		if (*(haystack + i) == *(needle + 0))
		{
			for (j = 0; *(needle + j); j++)
			{
				if (*(haystack + i + j) != *(needle + j))
					break;
			}
			j -= 1;
			if (*(haystack + i + j) == *(needle + j))
				return ((haystack + i));
		}
	}
	return (0);
}
