#include "main.h"
/**
 * times_table - print 9 times table
 *
 * Return: Always 0 (Success
 */
void times_table(void)
{
	int r;
	int c;
	int m;

	for (r = 0; r <= 9; r++)
	{
	for (c = 0; c <= 9; c++)
	{
	m = r * c;
	if (m < 10)
	{
	_putchar(m + '0');
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else
	{
	_putchar(m / 10 + '0');
	_putchar(m % 10 + '0');
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	}
}
