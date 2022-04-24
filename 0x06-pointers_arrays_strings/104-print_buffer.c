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
	int i = 0, j, k;

	if (size <= 0)
	{
		printf("\n");
	}
	else
	{
		while (i < size)
		{
			printf("%08x: ", i);
			for (k = 0; k < 10; k++)
			{
				(k + i < size) ? printf("%02x", b[i + k]) : printf("  ");
				if (k % 2 != 0)
					printf(" ");
			}

			for (j = 0; j <= 9 && i < size; i++, j++)
			(b[i] >= 0 && b[i] <= 31) ? printf(".") : printf("%c", b[i]);
			printf("\n");
		}
	}
}
