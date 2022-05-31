#include "main.h"
/**
 * flip_bits - counts the number of flipped bits
 * @n: first number to flip
 * @m: second number to flip
 * Description: counter the number of bits that must be flipped
 * to get from one number to another.
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n, b = m, c = 0, d = 0;
	unsigned int i = 0;

	for (; a > 0 || b > 0; a >>= 1, b >>= 1)
	{
		c = (a & 1) ? 0 : 1;
		d = (b & 1) ? 0 : 1;
		if (c != d)
			i++;
	}
	return (i);
}
