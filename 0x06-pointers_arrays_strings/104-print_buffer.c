#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer
 * @b: character string to print
 * @size: bytes to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i = 0, j, k, l, m = 0, n;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		while (i < size)
		{
			printf("%p: ", (b + i));

			for (k = 0, n = 0; k <= 9 && m < size;)
			{
				for (l = 0; l < 2 && m < size; m++, k++, l++, n++)
					(b[m] >= 0 && b[m] <= 15) ? printf("0%x", b[m]) : printf("%x", b[m]);
				printf(" ");
			}
			for (; n < 10; n += 2)
				printf("     ");
			for (j = 0; j <= 9 && i < size; i++, j++)
			(b[i] >= 0 && b[i] <= 31) ? printf(".") : printf("%c", b[i]);
			printf("\n");
		}
	}
}
