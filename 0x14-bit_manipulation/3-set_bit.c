#include "main.h"
/**
 * set_bit - set bit to 1 at a given index
 * @n: the number to check
 * @index: the position to set the bit
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int j, k = 1;

	j = *n;
	for (i = 0; i < index; i++, j >>= 1, k <<= 1)
		if (j == 0 && index > 63)
			return (-1);
	*n = (*n | k);
	return (1);
}
