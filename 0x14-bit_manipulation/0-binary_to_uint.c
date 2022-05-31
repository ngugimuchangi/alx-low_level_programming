#include "main.h"
/**
 * binary_to_uint - converts binary string to unsigned int
 * @b: binary string to convert
 *
 * Return: converted unsigned int on success, 0 if string
 * is NULL or contains non-binary characters.
 */
unsigned int binary_to_uint(const char *b)
{
	int i, j, k;
	unsigned long int res = 0;

	if (!b)
		return (0);
	for (i = 0, k = 1; b[i]; i++, k *= 2)
		if (b[i] != 48 && b[i] != 49)
			return (0);
	for (j = 0, k /= 2; j < i; j++, k /= 2)
		res += (b[j] - 48) * k;
	return (res);
}
