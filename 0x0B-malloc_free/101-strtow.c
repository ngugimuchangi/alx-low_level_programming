#include <stdlib.h>
#include "main.h"
/**
 * words_count - checks wordcount of string;
 * @str: string to check
 * Return: wordcount on sucess
 */
int words_count(char *str)
{
	int i, words = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			while (str[i] != ' ')
				i++;
			words++;
		}
	}
	return (words);
}

/**
 * strtow - returns pointer to an array of string (words)
 * @str: string to check
 * Return: pointer to words on success, NULL on failure
 */
char **strtow(char *str)
{
	char **words_array;
	int count_char = 0, i, idx = 0, fr_idx, j = 0, e = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	words_array = (char **)malloc((words_count(str) + 1) * sizeof(char *));
	if (words_array == NULL || words_count(str) == 0)
	{
		free(words_array);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			e = 1;
			for (count_char = 0; str[i] != ' ' && str[i] != '\0'; i++)
				count_char++;
			words_array[idx] = (char *)malloc((count_char + 1) * sizeof(char));
			if (words_array[idx] == NULL)
			{
				for (fr_idx = 0; fr_idx <= idx; fr_idx++)
					free(words_array[fr_idx]);
				free(words_array);
				return (NULL);
			}
			for (j = 0; j < count_char; j++)
				words_array[idx][j] = str[(i - count_char) + j];
			words_array[idx][j] = '\0';
			idx++;
		}
	}
	if (e != 1)
		return (NULL);
	words_array[idx] = NULL;
	return (words_array);
}
