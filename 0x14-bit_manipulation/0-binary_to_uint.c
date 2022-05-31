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
	int i, j, k = 1;
	unsigned long int res = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++, k *= 2)
		if (b[i] < '0' || b[i] > '1' || i > 63)
			return (0);
	for (j = 0, k /= 2; j < i; j++, k /= 2)
		res += (b[j] - 48) * k;
	return (res);
}
