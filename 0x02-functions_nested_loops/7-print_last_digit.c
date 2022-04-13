#include "main.h"
/**
 * print_last_digit - Entry point
 * @n: number to check
 *
 * Return: modula of n/10
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	n = -n;
	_putchar(n);

	return (n);
}
