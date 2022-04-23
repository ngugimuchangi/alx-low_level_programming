#include "main.h"
/**
 * infinite_add - adds two numbers from a character array
 * @n1: first number
 * @n2: second number
 * @r: result string
 * @size_r: size of result string
 * Return: r if result can fit, 0 if it cannot fit
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, m, len, a, b, rem = 0;

	while (n1[i])
		i++;
	while (n2[j])
		j++;
	if (i > j)
		len = i;
	else
		len = j;
	if (len + 1 > size_r)
		return (0);
	r[len] = '\0';
	for (k = len - 1; k >= 0;  k--)
	{
		i--;
		j--;
		if (i >= 0)
			a = n1[i] - '0';
		else
			a = 0;
		if (j >= 0)
			b = n2[j] - '0';
		else
			b = 0;
		r[k] = (a + b + rem) % 10 + '0';
		rem = (a + b + rem) / 10;
	}
	if (rem == 1)
	{
		if ((len + 2) > size_r)
		{
			return (0);
		}
		else
		{
			for (m = len + 1; len >= 0; len--, m--)
				r[m] = r[len];
			r[0] = rem + '0';
		}
	}
	return (r);
}
