#include "main.h"
/**
 * clear_bit - set bit value to 0 at a given index
 * @n: address of number to check
 * @index: position of the bit to clear
 *
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, j = 1;
	unsigned long int k;

	k = *n;
	for (i = 0; i < index; i++, j <<= 1, k >>= 1)
		if (k == 0 && index > 63)
			return (-1);
	*n = (k & 1) ? (*n ^ j) : *n;
	return (1);
}
