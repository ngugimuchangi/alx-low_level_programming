#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns pointer to new duplicate string
 * @str: string to duplicate.
 * Return: pointer to str on success, NULL on failure.
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *ptr;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;
	i++;
	ptr = malloc(i * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		ptr[j] = str[j];
	return (ptr);
}
