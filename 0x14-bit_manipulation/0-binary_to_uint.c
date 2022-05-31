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
	unsigned long int i, res = 0;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		res <<= 1;
		if (b[i] == '1')
			res += 1;
	}
		return (res);
}
