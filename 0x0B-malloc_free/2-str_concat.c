#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new string on sucess, NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	j++;
	ptr = malloc((i + j) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';
	return (ptr);
}
