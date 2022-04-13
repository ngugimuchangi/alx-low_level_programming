#include "main.h"
/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting point
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	for (n, n >= 98, n--)
	{
	_putchar(n + '0');
	if (n = 98)
	{
	_putchar('\n');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	for (n, n <= 98, n++)
	{
	_putchar(n + '0');
	if (n = 98)
	{
	_putchar('\n');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	}
	}
}
