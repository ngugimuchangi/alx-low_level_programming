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
	int a, i = 0, j, k, l, m = 0, n;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		while (i < size)
		{
			printf("%08x: ", i);

			for (k = 0, n = 0; k <= 9 && m < size;)
			{
				for (l = 0; l < 2 && m < size; m++, k++, l++, n++)
				printf("%02x", (unsigned char)b[m]);
				printf(" ");
				a = n;
			}
			for (; n < 10 && a % 2 == 0;  n += 2)
				printf("     ");
			if (n < 10 && a % 2 != 0)
			{
				printf(" ");
				for (; n < 10; n += 1)
				printf("  ");
			}
			for (j = 0; j <= 9 && i < size; i++, j++)
			(b[i] >= 0 && b[i] <= 31) ? printf(".") : printf("%c", b[i]);
			printf("\n");
		}
	}
}
