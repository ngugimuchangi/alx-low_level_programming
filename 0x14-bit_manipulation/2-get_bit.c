#include "main.h"
/**
 * get_bit - get the bit at a specific index.
 * @n: number to check
 * @index: position to check.
 *
 * Return: bit at given index on success, -1 on failuire
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, res;

	for (i = 0; i <= index; i++, n = n >> 1)
	{
		if (n == 0 && index > 63)
			return (-1);
		res = (n & 1) ? 1 : 0;
	}
	return (res);
}
