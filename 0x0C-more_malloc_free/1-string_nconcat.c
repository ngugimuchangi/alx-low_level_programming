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
	unsigned int i, j, size;
	char *ptr;

	if (s1 != NULL && s2 == NULL)
		ptr = s1;
	else if (s1 == NULL && s2 != NULL)
		ptr = s2;
	else if (s1 == NULL && s2 == NULL)
		exit(EXIT_FAILURE);
	else
	{
		size = sizeof(s1) + (sizeof(char) * n);
		ptr = malloc(size);
		if (ptr == NULL)
			exit(EXIT_FAILURE);
		for (i = 0; s1[i] != '\0'; i++)
			*(ptr + i) = s1[i];
		for (j = 0; j < n; j++, i++)
			*(ptr + i) = s2[j];
		*(ptr + i) = '\0';
	}
	return (ptr);
}
