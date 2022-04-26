#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum two diagonals of a squares;
 * @a: integer array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *(a + i * size + i);
		sum2 += *(a + (i * size) + (size - 1- i));
	}
	printf("%d, %d\n", sum, sum2);
}
