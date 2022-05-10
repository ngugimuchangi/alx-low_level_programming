#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates S1 with n bytes of S2.
 * @s1: first string
 * @s2: second string
 * @n: s2 bytes to copy
 * Return: pointer to concatenated string on success,
 * NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *ptr;

	if (s1 == NULL)
		i = 0;
	else
		for (i = 0; s1[i]; i++)
			;
	if (s2 == NULL)
		j = 0;
	else
		for (j = 0; s2[j]; j++)
			;
	j = (j > n) ? n : j;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		*(ptr + k) = s1[k];
	for (k = 0; k < j; k++)
		*(ptr + i + k) = s2[k];
	*(ptr + i + k) = '\0';
	return (ptr);
}
