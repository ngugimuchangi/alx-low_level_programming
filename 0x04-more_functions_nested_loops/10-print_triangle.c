#include "main.h"
/**
 * print_triangle - print a traingle
 * @size: determines size of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int c, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (s = 0; s <= size; s++)
			{
				if (s < (size - c))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
}
